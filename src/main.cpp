#include <iostream>
#include <fstream>
#include <string>

void usage()
{
	std::cout << "Usage:\n";
	std::cout << "    next <file>\n";
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		usage();
		std::cout << "Error: no input provided";
		return 1;
	}

	std::ifstream fileRead(argv[1]);
	std::string fileContent((std::istreambuf_iterator<char>(fileRead)),
							(std::istreambuf_iterator<char>()));

	std::cout << fileContent << '\n';

	return 0;
}