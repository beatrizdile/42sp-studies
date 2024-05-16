#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(); //Default constructor
		Fixed(const Fixed& copy); // Copy Default constructor
		Fixed &operator = (const Fixed& src); // Assignment Operator constructor
		~Fixed(); // Deconstructor

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
		int _fp_value;
		static const int _fract_bits;
	
};

#endif