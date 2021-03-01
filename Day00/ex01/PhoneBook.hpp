#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
#include <cstring>
#include <string>
#include <regex>
#include <algorithm>

# define reg_isalnum_sup(s) (std::regex_match(s, std::regex("[a-zA-Z0-9 ',.?!-]+")))
# define reg_isnum(s) (std::regex_match(s, std::regex("[0-9 ]+")))
# define reg_isemail(s) (std::regex_match(s, std::regex("[a-zA-Z0-9. @-]+")))
# define reg_isbirthday(s) (std::regex_match(s, std::regex("[0-9/. ]+")))

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	int		add(int index);
	void	search(PhoneBook *instance, int index);

	std::string	getfirst_name(void) const {return this->_first_name;};
	std::string	getlast_name(void) const {return this->_last_name;};
	std::string	getnickname(void) const {return this->_nickname;};
	std::string	getlogin(void) const {return this->_login;};
	std::string	getpostal_address(void) const {return this->_postal_address;};
	std::string	getemail_address(void) const {return this->_email_address;};
	std::string	getphone_number(void) const {return this->_phone_number;};
	std::string	getbirthday_date(void) const {return this->_birthday_date;};
	std::string	getfavorite_meal(void) const {return this->_favorite_meal;};
	std::string	getunderwear_color(void) const {return this->_underwear_color;};
	std::string	getdarkest_secret(void) const {return this->_darkest_secret;};

	int			setfirst_name(std::string str);
	int			setlast_name(std::string str);
	int			setnickname(std::string str);
	int			setlogin(std::string str);
	int			setpostal_address(std::string str);
	int			setemail_address(std::string str);
	int			setphone_number(std::string str);
	int			setbirthday_date(std::string str);
	int			setfavorite_meal(std::string str);
	int			setunderwear_color(std::string str);
	int			setdarkest_secret(std::string str);


private:
	std::string _first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

};

#endif
