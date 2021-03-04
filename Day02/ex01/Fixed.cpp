#include "Fixed.hpp"

Fixed::Fixed() : _fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int s_fixe)
{
	std::cout << "Int constructor called" << std::endl;
	_fixe = s_fixe << this->_bits;
}

Fixed::Fixed(const float s_fixe) : _fixe(s_fixe)
{
	std::cout << "Float constructor called" << std::endl;
	_fixe= (int)(roundf(s_fixe * 256));
}

Fixed::Fixed(const Fixed &fixe)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixe;
}

Fixed & Fixed::operator=(Fixed const &fixe)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixe = fixe.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_fixe = raw;
}

int		Fixed::getRawBits(void) const
{
	return (_fixe);
}

int		Fixed::toInt(void) const
{
	return (_fixe >> _bits);
}

float		Fixed::toFloat(void) const
{
	return ((float)_fixe / (float)(256));
}

std::ostream &operator<<(std::ostream &o, Fixed const &_fixe)
{
	o << _fixe.toFloat();
	return (o);
}
