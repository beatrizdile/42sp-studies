#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putstr(char	*str, int *lenth)
{
	if (!str)
		str = "(null)";
	while (*str)
		*lenth += write(1, str++, 1);
}

void	ft_putnum(long long int num, int base, int *lenth)
{
	if (num < 0)
	{
		num *= -1;
		*lenth += write(1, "-", 1);
	}
	if (num >= base)
		ft_putnum((num / base), base, lenth);
	*lenth += write(1, &"0123456789abcdef"[num % base], 1);
}

int	ft_printf(char *str, ...)
{
	int	lenth = 0;

	va_list	pointer;
	va_start(pointer, str);
	
	while(*str)
	{
		if ((*str == '%' && *(str+1) == 's') || (*str == '%' && *(str+1) == 'd') || (*str == '%' && *(str+1) == 'x'))
		{
			str++;
			if (*str == 's')
				ft_putstr(va_arg(pointer, char *), &lenth);
			else if (*str == 'd')
				ft_putnum(va_arg(pointer, int), 10, &lenth);
			else if (*str == 'x')
				ft_putnum(va_arg(pointer, unsigned int), 16, &lenth);
		}
		else
			lenth += write(1, str, 1);
		str++;
	}
	va_end(pointer);
	return (lenth);
}

int main(void)
{
	printf("%d", printf("oioio bilokah e %s\n", "foda"));
	printf("%x", 2112443);
	printf("\n-----------------\n");
	ft_printf("%d", ft_printf("oioio bilokah e %s\n", "foda"));
	ft_printf("%x", 2112443);
}
