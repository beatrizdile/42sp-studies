#include <stdio.h>

char	lower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}

int	get_digit(char	ch, int	base)
{
	int	max;
	if (base <= 10)
		max = base + '0';
	else
		max = base - 10 + 'a';
	
	if ((ch >= '0' && ch <= '9') && ch < max)
		return (ch - '0');
	if ((ch >= 'a' && ch <= 'f') && ch < max)
		return (10 + ch - 'a');
	else
		return (-1);
}


int	ft_atoi_base(const char	*str, int	str_base)
{
	int	res = 0;
	int	digit = 0;
	int	sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while((digit = get_digit(lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		str++;
	}
	return (res);
}
