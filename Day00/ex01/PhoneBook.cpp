#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Enter underwer color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	index++;
	std::cout << "index: " << index << std::endl;
}

void	PhoneBook::search(void)
{
	std::string choose;
	if (index == 0)
	{
		std::cout << "You need to create a contact" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Choose the contact index you need: ";
		std::getline(std::cin, choose);
		if (choose.size() == 1)
			if (choose[0] >= '0' && choose[0] <= '8')
			{
				std::cout << "First name: " << first_name << std::endl;
				std::cout << "Last name: " << last_name << std::endl;
				std::cout << "Nickname: " << nickname << std::endl;
				std::cout << "Login: " << login << std::endl;
				std::cout << "Postal address: " << postal_address << std::endl;
				std::cout << "Phone number: " << phone_number << std::endl;
				std::cout << "Birthday date: " << birthday_date << std::endl;
				std::cout << "Favorite meal: " << favorite_meal << std::endl;
				std::cout << "Underwer color: " << underwear_color << std::endl;
				std::cout << "Darkest secret: " << darkest_secret << std::endl;
				break;
			}
		//les info
	}
	std::cout << std::endl;
}
