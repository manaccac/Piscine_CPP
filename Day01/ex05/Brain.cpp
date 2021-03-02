#include "Brain.hpp"

Brain::Brain()
{
	neurone = "1 MANGER";
	std::cout << "cerveau ? combien a tu de neurones?" << std::endl << neurone << std::endl;
}

Brain::~Brain()
{
}

std::string Brain::identify() const {
    const long addresse = (long)this;

	std::stringstream brain_id;
	brain_id << "0x" << std::uppercase << std::hex << addresse;
	return (brain_id.str());
}
