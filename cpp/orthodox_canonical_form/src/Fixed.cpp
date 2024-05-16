#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

Fixed::Fixed() : _fp_value(0) //Default constructor definition _fp_value default value is 0
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) // Copy default constructor
{
	*this = copy; // Used assignment operator
	std::cout << "Fixed Copy Assignment Constructor called" << std::endl;
}

Fixed &Fixed::operator =(const Fixed &src) // Operator overload
{
	if (this != &src) // Check whether self assignment or not
		this->_fp_value = src.getRawBits();
	std::cout << "Fixed Copy Assignment Constructor called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

int Fixed::getRawBits(void) const // Getter function
{
	return this->_fp_value;
}

void Fixed::setRawBits(int const raw) // Setter function
{
	this->_fp_value = raw;
}
