#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include <unordered_map>

#include "common.h"
#include "Memory.h"

enum class Op : uint8
{
	HALT = 0,
	SET,
	PUSH,
	POP,
	EQ,
	GT,
	JMP,
	JT,
	JF,
	ADD,
	MULT,
	MOD,
	AND,
	OR,
	NOT,
	RMEM,
	WMEM,
	CALL,
	RET,
	OUT,
	IN,
	NOOP, // = 21
};

// 16 bit register
using Register = uint16;

// unbounded 16 bit stack
using Stack = std::stack<uint16, std::vector<uint16>>;

class Machine
{
	bool m_valid{ false };

	// data
	Memory m_mem;
	Register m_reg[8]{ 0 };
	Stack m_stack;

	uint15 m_programMax{ 0 };

public:
	////////// class stuff
	explicit Machine(char const* _programName);

	uint16& Get(uint15 _addr)
	{
		return m_mem[_addr];
	}

	uint16& GetArg(uint15 _addr)
	{
		uint16& arg = Get(_addr);
		if (arg <= 32767)
		{
			return arg; // literal
		}
		else
		{
			assert(arg <= 32775);
			return m_reg[arg - 32768]; //register
		}
	}

	uint16& GetArgMem(uint15 _addr)
	{
		return m_mem[GetArg(_addr)];
	}

	std::unordered_map<uint16, Op> runOps;
	std::unordered_map<uint16, Op> writtenOps;
	std::unordered_map<uint16, Op> overWrittenOps;

	uint16 const& Get(uint15 _addr) const
	{
		return m_mem[_addr];
	}

	uint16 const& GetArg(uint15 _addr) const
	{
		uint16 const& arg = Get(_addr);
		if (arg <= 32767)
		{
			return arg; // literal
		}
		else
		{
			assert(arg <= 32775);
			return m_reg[arg - 32768]; //register
		}
	}

	uint16 const& GetArgMem(uint15 _addr) const
	{
		return m_mem[GetArg(_addr)];
	}

	std::string TextArg(uint15 _addr, bool _char = false) const
	{
		uint16 const& arg = Get(_addr);
		if (arg <= 32767)
		{
			if (_char && arg <= 255)
			{
				return std::string{ static_cast<char>(arg) };
			}
			return std::to_string(arg); // literal
		}
		else
		{
			assert(arg <= 32775);
			return std::string("reg[") + std::to_string(arg - 32768) + "]"; //register
		}
	}

	Op GetOp(uint15 _ip) const
	{
		assert(_ip.x <= 32767);
		return static_cast<Op>(m_mem[_ip]);
	}

	void Push(uint16 _arg)
	{
		m_stack.push(_arg);
	}

	uint16 Pop()
	{
		assert(!m_stack.empty());
		uint16 ret = m_stack.top();
		m_stack.pop();
		return ret;
	}

	void Save();
	void Load();

	int Run();

	std::vector<std::string> Disassemble(bool _alt = false, uint15 _start = 0, uint15 _end = 0) const;
};

#include "Machine.inl"