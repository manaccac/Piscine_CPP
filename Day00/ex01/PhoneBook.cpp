#include "PhoneBook.hpp"
PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

int			PhoneBook::setfirst_name(std::string str)
{
	if (reg_isalpha(str))
	{
		this->_first_name = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setlast_name(std::string str)
{
	if (reg_isalpha(str))
	{
		this->_last_name = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setnickname(std::string str)
{
	if (reg_isalnum(str))
	{
		this->_nickname = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setlogin(std::string str)
{
	if (reg_isalpha(str))
	{
		this->_login = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setpostal_address(std::string str)
{
	if (reg_isalnum_sup(str))
	{
		this->_postal_address = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setemail_address(std::string str)
{
	if (reg_isemail(str))
	{
		this->_email_address = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setphone_number(std::string str)
{
	if (reg_isnum(str))
	{
		this->_phone_number = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setbirthday_date(std::string str)
{
	if (reg_isbirthday(str))
	{
		this->_birthday_date = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setfavorite_meal(std::string str)
{
	if (reg_isalpha(str))
	{
		this->_favorite_meal = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setunderwear_color(std::string str)
{
	if (reg_isalpha(str))
	{
		this->_underwear_color = str;
		return (1);
	}
	return (0);
}

int			PhoneBook::setdarkest_secret(std::string str)
{
	if (reg_isalnum_sup(str))
	{
		this->_darkest_secret = str;
		return (1);
	}
	return (0);
}

int		PhoneBook::add(int index)
{
	std::string str;
	if (index == 8)
	{
		std::cout << "Your contact limit is 8" << std::endl;
		return (index);
	}
	std::cout << "Enter first name: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setfirst_name(str) == 0)
			std::cout << "Bad first name need alpha only: ";
		else
			break;
	}
	std::cout << "Enter last name: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setlast_name(str) == 0)
			std::cout << "Bad last name need alpha only: ";
		else
			break;
	}
	std::cout << "Enter nickname: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setnickname(str) == 0)
			std::cout << "Bad nickname need alpha and num only: ";
		else
			break;
	}
	std::cout << "Enter login: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setlogin(str) == 0)
			std::cout << "Bad login need alpha only: ";
		else
			break;
	}
	std::cout << "Enter postal address: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setpostal_address(str) == 0)
			std::cout << "Bad postal address need alpha and num only: ";
		else
			break;
	}
	std::cout << "Enter email address: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setemail_address(str) == 0)
			std::cout << "Bad postal address need alpha and num and @ - only: ";
		else
			break;
	}
	std::cout << "Enter phone number: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setphone_number(str) == 0)
			std::cout << "Bad phone number need num only: ";
		else
			break;
	}
	std::cout << "Enter birthday date: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setbirthday_date(str) == 0)
			std::cout << "Bad birthday date need num and / only: ";
		else
			break;
	}
	std::cout << "Enter favorite meal: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setfavorite_meal(str) == 0)
			std::cout << "Bad favorite meal need alpha only: ";
		else
			break;
	}
	std::cout << "Enter underwer color: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setunderwear_color(str) == 0)
			std::cout << "Bad underwer color need alpha only: ";
		else
			break;
	}
	std::cout << "Enter darkest secret: ";
	while (1)
	{
		std::getline(std::cin, str);
		if (setdarkest_secret(str) == 0)
			std::cout << "Bad darkest secret need alpha only: ";
		else
			break;
	}
	index++;
	std::cout << "index: " << index << std::endl;
	return (index);
}

void	PhoneBook::search(PhoneBook *instance, int index)
{
	std::string choose;
	int 		i = 0;
	char str[11];
	if (index == 0)
	{
		std::cout << "You need to create a contact" << std::endl;
		return ;
	}
	while (i != index)
	{
		std::cout << i + 1 << "         |";
		if (instance[i]._first_name.size() <= 9)
			for (int j = 0; j != 10; j++)
				str[j] = ' ';
		else
			str[9] = '.';
		instance[i]._first_name.copy(str, 9, 0);
		std::cout << str << "|";
		if (instance[i]._last_name.size() <= 9)
			for (int j = 0; j != 10; j++)
				str[j] = ' ';
		else
			str[9] = '.';
		instance[i]._last_name.copy(str, 9, 0);
		std::cout << str << "|";
		if (instance[i]._nickname.size() <= 9)
			for (int j = 0; j != 10; j++)
				str[j] = ' ';
		else
			str[9] = '.';
		instance[i]._nickname.copy(str, 9, 0);
		std::cout << str << "|" << std::endl;
		i++;
	}
	while (1)
	{
		std::cout << "Choose the contact index you need: ";
		std::getline(std::cin, choose);
		if (choose.size() == 1)
			if (choose[0] > '0' && choose[0] <= '8')
			{
				i = atoi(choose.c_str()) - 1;
				if (i < index)
				{
					std::cout << "First name: " << instance[i]._first_name << std::endl;
					std::cout << "Last name: " << instance[i]._last_name << std::endl;
					std::cout << "Nickname: " << instance[i]._nickname << std::endl;
					std::cout << "Login: " << instance[i]._login << std::endl;
					std::cout << "Postal address: " << instance[i]._postal_address << std::endl;
					std::cout << "Email address: " << instance[i]._email_address << std::endl;
					std::cout << "Phone number: " << instance[i]._phone_number << std::endl;
					std::cout << "Birthday date: " << instance[i]._birthday_date << std::endl;
					std::cout << "Favorite meal: " << instance[i]._favorite_meal << std::endl;
					std::cout << "Underwer color: " << instance[i]._underwear_color << std::endl;
					std::cout << "Darkest secret: " << instance[i]._darkest_secret << std::endl;
					break;
				}
			}
	}
	//std::cout << std::endl;
	return ;
}
