#include <iostream>
#include <cassert>

#include "common.h"
#include "Machine.h"

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


	return machine.Run();
}