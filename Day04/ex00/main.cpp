#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Dev.hpp"

int main()
{
	Sorcerer	wizare("manaccac", "Super Dev");
	std::cout << wizare;

	std::cout << std::endl;

	Victim		jdel("Jdel");
	std::cout << jdel;

	std::cout << std::endl;

	wizare.polymorph(jdel);

	std::cout << std::endl;

	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl;

	Dev frfrey("Frfrey");
	std::cout << frfrey;
	robert.polymorph(frfrey);

	std::cout << std::endl;

	return (0);
}
