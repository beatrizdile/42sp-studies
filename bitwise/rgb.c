#include <stdio.h>

void	print_last_byte(int num)
{
  	int last_byte = num & 0xff;

	for (int i = 7; i >= 0; i--)
		printf("%d", (last_byte >> i) & 1);

	printf("\n\n");
}

void	print_binary(int num)
{
	printf("%d: ", num);
	for (int i = 31; i >= 0; i--)
		printf("%d", (num >> i) & 1);
	printf("\n");
}

int	rgb_to_hex(int red, int green, int blue)
{
	int	hex = 0;

	hex = red << 24 | hex;
	printf("hex:");
	print_binary(hex);

	hex = green << 16 | hex;
	printf("hex:");
	print_binary(hex);

	hex = blue << 8 | hex;
	printf("hex:");
	print_binary(hex);

	hex = 0xff | hex;
	printf("hex:");
	print_binary(hex);
	
	return (hex);
}

int main()
{
	int	red = 70;
	int	green = 25;
	int	blue = 90;

	printf("red\n");
	print_binary(red);
	print_last_byte(red);
	printf("green\n");
	print_binary(green);
	print_last_byte(green);
	printf("blue\n");
	print_binary(blue);
	print_last_byte(blue);

	rgb_to_hex(red, green, blue);
}
