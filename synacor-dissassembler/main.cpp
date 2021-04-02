#include <iostream>

#include "../synacor/Machine.h"

int main(int _argc, char const* _argv[])
{
	using std::cout;

	cout.sync_with_stdio(false);

	if (_argc < 2)
	{
		cout << "\nERROR: binary file not supplied, closing...";
		return EXIT_FAILURE;
	}

	char const* binaryFilename = _argv[1];

	Machine machine{ binaryFilename };

	// clear out unused code
	machine.Get(5451) = 21;
	machine.Get(5452) = 21;
	machine.Get(5453) = 21;

	machine.Get(5483) = 21;
	machine.Get(5484) = 21;

	// set reg[7] to magic number 25734
	machine.Get(5485) = 1;
	machine.Get(5486) = 32775;
	machine.Get(5487) = 25734;

	// set reg[1] to 6 to pass confirmation check
	machine.Get(5488) = 1;
	machine.Get(5489) = 32768;
	machine.Get(5490) = 6;

	bool const alt = _argc >= 3 && strcmp(_argv[2], "-alt") == 0;
	bool const ln = _argc >= 4 && strcmp(_argv[3], "-ln") == 0;
	std::vector<std::string> const disasm = machine.Disassemble(alt);// , 5451, 5604);

	std::ofstream of{ std::string(binaryFilename) + (alt ? std::string(".c") : std::string(".asm")), std::ios::trunc };

	for (auto const& line : disasm)
	{
		of << line << '\n';
	}

	return 0;
}