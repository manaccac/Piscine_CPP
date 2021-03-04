#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int s_fixe);
	Fixed(const float s_fixe);
	Fixed(const Fixed &fixe);
	Fixed & operator=(Fixed const &fixe);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
private:
	int	_fixe;
	static const int _bits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &_fixe);

#endif
