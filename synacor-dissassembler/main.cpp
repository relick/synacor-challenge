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

	bool const alt = _argc >= 3 && strcmp(_argv[2], "-alt") == 0;
	std::vector<std::string> const disasm = machine.Disassemble(alt);// , 5451, 5604);

	std::ofstream of{ std::string(binaryFilename) + (alt ? std::string(".c") : std::string(".asm")), std::ios::trunc };

	for (auto const& line : disasm)
	{
		of << line << '\n';
	}

	return 0;
}