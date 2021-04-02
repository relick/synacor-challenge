#pragma once

#include <unordered_map>
#include <unordered_set>

Machine::Machine(char const* _programName)
{
	std::ifstream f{ _programName, std::ios::binary };
	if (!f.is_open())
	{
		std::cout << "\nERROR: binary not found, closing...";
		return;
	}

	f.seekg(0, std::ios::end);
	usize const numBytes = f.tellg();
	f.seekg(0, std::ios::beg);

	if ((numBytes & 1) != 0)
	{
		std::cout << "\nERROR: odd number of bytes, program not loading...";
		return;
	}
	uint16 const numNums = static_cast<uint16>(numBytes / 2);

	uint16* loadedData = new uint16[numNums]();

	// load as little-endian
	unsigned char next[2];
	for (uint16 i = 0; i < numNums; ++i)
	{
		f.read((char*)next, 2);
		loadedData[i] = next[0] | (next[1] << 8);

		/*if (loadedData[i] <= 32767)
		{
			std::cout << "literal " << loadedData[i] << '\n';
		}
		else if (loadedData[i] <= 32775)
		{
			std::cout << "register " << (loadedData[i] - 32768) << '\n';
		}
		else
		{
			std::cout << "invalid\n";
		}*/
	}

	//std::cout << "finished reading\n";

	m_mem.Copy(0, loadedData, numNums);

	m_programMax = numNums;
	m_valid = true;
}

int Machine::Run()
{
	if (!m_valid)
	{
		return EXIT_FAILURE;
	}

	uint15 ip{ 0 }; // instruction pointer

	while (true)
	{
		Op const op = GetOp(ip++);

		if (overWrittenOps.contains(ip.x) && overWrittenOps[ip.x] != op)
		{
			std::cout << "self-modified then ran (overwrite)!\n";
		}

		if (writtenOps.contains(ip.x))
		{
			std::cout << "self-modified then ran (newly written)!\n";
		}

		if (runOps.contains(ip.x) && runOps[ip.x] != op)
		{
			std::cout << "self-modified!\n";
		}
		else
		{
			runOps[ip.x] = op;
		}

		switch (op)
		{
		case Op::HALT:
		{
			// 0
			return EXIT_SUCCESS;
		}
		case Op::SET:
		{
			// 1 a b
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			a = b;
			break;
		}
		case Op::PUSH:
		{
			// 2 a
			uint16 const a = GetArg(ip++);
			Push(a);
			break;
		}
		case Op::POP:
		{
			// 3 a
			if (m_stack.empty())
			{
				std::cout << "\nERROR: Tried to pop on empty stack, closing...";
				return EXIT_FAILURE;
			}
			uint16& a = GetArg(ip++);
			a = Pop();
			break;
		}
		case Op::EQ:
		{
			// 4 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = (b == c) ? 1 : 0;
			break;
		}
		case Op::GT:
		{
			// 5 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = (b > c) ? 1 : 0;
			break;
		}
		case Op::JMP:
		{
			// 6 a
			uint16 const a = GetArg(ip++);
			ip = a;
			break;
		}
		case Op::JT:
		{
			// 7 a b
			uint16 const a = GetArg(ip++);
			if (a != 0)
			{
				uint16 const b = GetArg(ip++);
				ip = b;
			}
			else
			{
				++ip;
			}
			break;
		}
		case Op::JF:
		{
			// 8 a b
			uint16 const a = GetArg(ip++);
			if (a == 0)
			{
				uint16 const b = GetArg(ip++);
				ip = b;
			}
			else
			{
				++ip;
			}
			break;
		}
		case Op::ADD:
		{
			// 9 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = uint15(b + c).x;
			break;
		}
		case Op::MULT:
		{
			// 10 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = uint15(b * c).x;
			break;
		}
		case Op::MOD:
		{
			// 11 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = b % c;
			break;
		}
		case Op::AND:
		{
			// 12 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = b & c;
			break;
		}
		case Op::OR:
		{
			// 13 a b c
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			uint16 const c = GetArg(ip++);
			a = b | c;
			break;
		}
		case Op::NOT:
		{
			// 14 a b
			uint16& a = GetArg(ip++);
			uint16 const b = GetArg(ip++);
			a = uint15(~b).x;
			break;
		}
		case Op::RMEM:
		{
			// 15 a [b]
			uint16& a = GetArg(ip++);
			uint16 const b = GetArgMem(ip++);
			a = b;
			break;
		}
		case Op::WMEM:
		{
			// 16 [a] b
			uint16 const arg = GetArg(ip++);
			uint16& a = Get(arg);
			uint16 const b = GetArg(ip++);
			if (a <= 21)
			{
				overWrittenOps[arg] = static_cast<Op>(a);
			}
			if (b <= 21)
			{
				writtenOps[arg] = static_cast<Op>(b);
			}
			a = b;
			break;
		}
		case Op::CALL:
		{
			// 17 a
			uint16 const a = GetArg(ip++);
			Push(ip.x);
			ip = a;
			break;
		}
		case Op::RET:
		{
			// 18
			if (m_stack.empty())
			{
				return EXIT_SUCCESS;
			}
			ip = Pop();
			break;
		}
		case Op::OUT:
		{
			// 19 a
			uint16 const a = GetArg(ip++);
			std::cout << static_cast<char>(a);
			break;
		}
		case Op::IN:
		{
			// 20 a
			uint16& a = GetArg(ip++);
			char c;
			std::cin.get(c);
			a = c;
			break;
		}
		case Op::NOOP:
		{
			// 21
			break;
		}
		}
	}

}

std::vector<std::string> Machine::Disassemble(bool _alt, uint15 _start, uint15 _end) const
{
	if (_start.x >= _end.x)
	{
		_start = 0;
		_end = m_programMax;
	}

	std::vector<std::string> lines((_end - _start).x);
	std::vector<char> linesVisited((_end - _start).x, false);

	uint16 nextCallNum{ 0 };
	std::unordered_map<uint16, std::string> calls; // call address to call num
	uint16 nextGotoNum{ 0 };
	std::unordered_map<uint16, std::string> gotos; // goto address to goto num

	auto GetCall = [&](uint16 _addr) -> std::string const&
	{
		if (!calls.contains(_addr))
		{
			calls[_addr] = std::string("fn") + std::to_string(nextCallNum++);
		}
		return calls[_addr];
	};
	auto GetGoto = [&](uint16 _addr) -> std::string const&
	{
		if (!gotos.contains(_addr))
		{
			gotos[_addr] = std::string("l") + std::to_string(nextGotoNum++);
		}
		return gotos[_addr];
	};

	std::unordered_set<uint16> visited;
	std::unordered_set<uint16> toVisit;
	toVisit.insert(_start.x);
	toVisit.insert(1287);

	uint15 ip = _start;
	bool reachedEndOfBlock = true;
	bool finalPass = false;

	auto ForwardIP = [&]() -> uint15
	{
		linesVisited[ip.x - _start.x] = true;
		return ip++;
	};

	std::string* continuedString{ nullptr };
	while (!reachedEndOfBlock || !toVisit.empty() || finalPass)
	{
		if (!finalPass)
		{
			if (reachedEndOfBlock)
			{
				while (!toVisit.empty() && visited.contains(*toVisit.begin()))
				{
					toVisit.erase(toVisit.begin());
				}
				if (toVisit.empty())
				{
					finalPass = true;
					ip = _start;
					continue;
					break;
				}
				ip = *toVisit.begin();
				visited.insert(*toVisit.begin());
				toVisit.erase(toVisit.begin());
				reachedEndOfBlock = false;
			}

			if (linesVisited[ip.x - _start.x])
			{
				reachedEndOfBlock = true;
				if (toVisit.empty())
				{
					finalPass = true;
					ip = _start;
				}
				continue;
			}
		}

		std::string& line = lines[ip.x - _start.x];
		bool wasContinuedString = false;

		if (finalPass)
		{
			if (linesVisited[ip.x - _start.x])
			{
				++ip;
				continue;
			}
		}
		switch (GetOp(ForwardIP()))
		{
		case Op::HALT:
		{
			// 0
			if (_alt)
			{
				line += "exit();";
			}
			else
			{
				line += "HALT;";
			}
			break;
		}
		case Op::SET:
		{
			// 1 a b
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + ';';
			}
			else
			{
				line += "SET " + a + ' ' + b + ';';
			}
			break;
		}
		case Op::PUSH:
		{
			// 2 a
			std::string const a = TextArg(ForwardIP());
			if (_alt)
			{
				line += "stack.push(" + a + ");";
			}
			else
			{
				line += "PUSH " + a + ';';
			}
			break;
		}
		case Op::POP:
		{
			// 3 a
			std::string const a = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = stack.pop();";
			}
			else
			{
				line += "POP " + a + ';';
			}
			break;
		}
		case Op::EQ:
		{
			// 4 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = (" + b + " == " + c + ") ? 1 : 0;";
			}
			else
			{
				line += "EQ " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::GT:
		{
			// 5 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = (" + b + " > " + c + ") ? 1 : 0;";
			}
			else
			{
				line += "GT " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::JMP:
		{
			// 6 a
			std::string a = TextArg(ForwardIP());
			if (a[0] != 'r') // not a register
			{
				uint16 const dest = std::stoi(a);
				a = GetGoto(dest);
				if (dest >= _start.x && dest < _end.x)
				{
					toVisit.insert(dest);
				}
				reachedEndOfBlock = true;
			}
			if (_alt)
			{
				line += "goto " + a + ';';
			}
			else
			{
				line += "JMP " + a + ';';
			}
			break;
		}
		case Op::JT:
		{
			// 7 a b
			std::string const a = TextArg(ForwardIP());
			std::string b = TextArg(ForwardIP());
			if (b[0] != 'r') // not a register
			{
				uint16 const dest = std::stoi(b);
				b = GetGoto(dest);
				if (dest >= _start.x && dest < _end.x)
				{
					toVisit.insert(dest);
				}
			}
			if (_alt)
			{
				line += "if (" + a + " != 0) { goto " + b + "; }";
			}
			else
			{
				line += "JT " + a + ' ' + b + ';';
			}
			break;
		}
		case Op::JF:
		{
			// 8 a b
			std::string const a = TextArg(ForwardIP());
			std::string b = TextArg(ForwardIP());
			if (b[0] != 'r') // not a register
			{
				uint16 const dest = std::stoi(b);
				b = GetGoto(dest);
				if (dest >= _start.x && dest < _end.x)
				{
					toVisit.insert(dest);
				}
			}
			if (_alt)
			{
				line += "if (" + a + " == 0) { goto " + b + "; }";
			}
			else
			{
				line += "JF " + a + ' ' + b + ';';
			}
			break;
		}
		case Op::ADD:
		{
			// 9 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + " + " + c + ';';
			}
			else
			{
				line += "ADD " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::MULT:
		{
			// 10 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + " * " + c + ';';
			}
			else
			{
				line += "MULT " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::MOD:
		{
			// 11 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + " % " + c + ';';
			}
			else
			{
				line += "MOD " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::AND:
		{
			// 12 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + " & " + c + ';';
			}
			else
			{
				line += "AND " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::OR:
		{
			// 13 a b c
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			std::string const c = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = " + b + " | " + c + ';';
			}
			else
			{
				line += "OR " + a + ' ' + b + ' ' + c + ';';
			}
			break;
		}
		case Op::NOT:
		{
			// 14 a b
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = ~" + b + ';';
			}
			else
			{
				line += "NOT " + a + ' ' + b + ';';
			}
			break;
		}
		case Op::RMEM:
		{
			// 15 a [b]
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			if (_alt)
			{
				line += a + " = mem[" + b + "];";
			}
			else
			{
				line += "RMEM " + a + " [" + b + "];";
			}
			break;
		}
		case Op::WMEM:
		{
			// 16 [a] b
			std::string const a = TextArg(ForwardIP());
			std::string const b = TextArg(ForwardIP());
			if (_alt)
			{
				line += "mem[" + a + "] = " + b + ';';
			}
			else
			{
				line += "WMEM [" + a + "] " + b + ';';
			}
			break;
		}
		case Op::CALL:
		{
			// 17 a
			std::string a = TextArg(ForwardIP());
			if (a[0] != 'r') // not a register
			{
				uint16 const dest = std::stoi(a);
				a = GetCall(dest);
				if (dest >= _start.x && dest < _end.x)
				{
					toVisit.insert(dest);
				}
			}
			if (_alt)
			{
				line += a + "();";
			}
			else
			{
				line += "CALL " + a + ';';
			}
			break;
		}
		case Op::RET:
		{
			// 18
			if (_alt)
			{
				line += "return;";
			}
			else
			{
				line += "RET;";
			}
			reachedEndOfBlock = true;
			break;
		}
		case Op::OUT:
		{
			// 19 a
			std::string const a = TextArg(ForwardIP(), true);
			if (_alt)
			{
				wasContinuedString = true;
				if (continuedString && a[0] != '\n')
				{
					line += '\\';
					*continuedString += a;
				}
				else
				{
					if (continuedString)
					{
						line += '\\';
						*continuedString += "\\n\";";
						continuedString = nullptr;
					}
					else
					{
						line += "std::cout << \"" + (a[0] == '\n' ? "\\n" : a);
						continuedString = &line;
					}

				}
			}
			else
			{
				line += "OUT " + (a[0] == '\n' ? "\\n" : a) + ';';
			}
			break;
		}
		case Op::IN:
		{
			// 20 a
			std::string const a = TextArg(ForwardIP());
			if (_alt)
			{
				line += "std::cin.get(" + a + ");";
			}
			else
			{
				line += "IN " + a + ';';
			}
			break;
		}
		case Op::NOOP:
		{
			// 21
			if (_alt)
			{
				line += "-";
			}
			else
			{
				line += "NOOP;";
			}
			break;
		}
		}

		if (!wasContinuedString && continuedString)
		{
			*continuedString += "\";";
			continuedString = nullptr;
		}

		if (finalPass)
		{
			reachedEndOfBlock = false;
		}

		if (ip.x >= _end.x)
		{
			reachedEndOfBlock = true;
			if (finalPass)
			{
				break;
			}
		}
	}

	// fill in labels
	for (uint16 i = 0; auto& line : lines)
	{
		if (calls.contains(_start.x + i))
		{
			usize const length = calls[_start.x + i].size() + 1;
			line = calls[_start.x + i] + ":" + (length >= 8 ? "" : length >= 4 ? "\t" : "\t\t") + line;
		}
		else if (gotos.contains(_start.x + i))
		{
			usize const length = gotos[_start.x + i].size() + 1;
			line = gotos[_start.x + i] + ":" + (length >= 8 ? "" : length >= 4 ? "\t" : "\t\t") + line;
		}
		else
		{
			if (!linesVisited[i])
			{
				uint16 const n = Get(_start + i);
				line = "\t\t" + (n <= 255 ? std::string{ static_cast<char>(n) } : std::to_string(n));
			}
			else
			{
				line = "\t\t" + line;
			}
			if (line == "\t\t" || line[2] == '\\')
			{
				line.clear();
			}
		}

		if (!line.empty())
		{
			line = std::to_string(i) + ":\t" + line;
		}
		++i;
	}

	// strip out backslashes
	for (auto lineI = lines.begin(); lineI != lines.end();)
	{
		if ((*lineI).empty())
		{
			lineI = lines.erase(lineI);
			//++lineI;
		}
		else
		{
			++lineI;
		}
	}

	return std::move(lines);
}