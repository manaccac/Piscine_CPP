#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* p_str = &str;
	std::string& ref_str = str;

	std::cout << *p_str << std::endl;
	std::cout << ref_str << std::endl;
}
