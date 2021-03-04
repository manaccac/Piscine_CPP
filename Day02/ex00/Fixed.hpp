#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixe);
	void operator=(const Fixed &fixe);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
private:
	int	_fixe;
	static const int _bits = 8;
};

#endif
