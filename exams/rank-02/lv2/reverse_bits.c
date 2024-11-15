#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char i;

	result = 0;
	i = 8;
	while (i--)
	{		
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}
