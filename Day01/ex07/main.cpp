#include <iostream>
#include <sstream>
#include <fstream>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error ARG" << std::endl;
		return (1);
	}
	std::stringstream	name_replace;
	name_replace << argv[1] << ".replace";
	std::string			line;
	std::string			src = argv[2];
	std::string			dst = argv[3];
	std::ifstream		Read_file(argv[1]);
	std::ofstream		Open_file(name_replace.str());
	size_t				pos;

	while (std::getline(Read_file, line))
	{
		pos = line.find(src);
		while (pos < line.size())
		{
			line.replace(pos, src.size(), dst);
			pos = line.find(src, pos + dst.size());
		}
		Open_file << line << std::endl;
	}
	return (0);
}