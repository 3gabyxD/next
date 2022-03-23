#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Hello, World\n";
	std::cout << "Argument Count: " << argc << '\n';
	if (argc > 1)
	{
		std::cout << "Arguments (ignoring filename):\n";
		for (int i = 1; i < argc; i++)
			std::cout << "    " << argv[i] << '\n';
		return 0;
	}
	else
	{
		std::cout << "No arguments given\n";
		return 1;
	}
}