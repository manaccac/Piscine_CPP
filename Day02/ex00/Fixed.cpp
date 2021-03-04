#include "Fixed.hpp"

Fixed::Fixed() : _fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixe)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixe = fixe.getRawBits();
}

void Fixed::operator=(const Fixed &fixe)
{
    std::cout << "Assignation operator called" << std::endl;
    _fixe = fixe.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixe = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixe);
}
