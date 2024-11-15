#include <unistd.h>

int	is_prime(int	num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}

	return (1);
}


int	atoi(char	*str)
{
	int	res = 0;

	while(*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}

	return (res);
}

void	put_num(int	num)
{
	if (num > 9)
		put_num(num/10);
	write(1, &"0123456789"[num % 10], 1);
}

int	main(int	argc, char	**argv)
{
	int	num;
	int	i = 0;
	int	res = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		while (i <= num)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
	}
	put_num(res);
	write(1, "\n", 1);
}