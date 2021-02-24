#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
#include <string>
class PhoneBook
{
public:
	std::string exec;
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string postal_address;
	std::string email_adress;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	int index;


	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
};

#endif
