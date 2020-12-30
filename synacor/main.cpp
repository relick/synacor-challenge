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

	return machine.Run();
}