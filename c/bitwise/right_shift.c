#include <stdio.h>

void	print_binary(int num)
{
	printf("%d: ", num);
	for (int i = 31; i >= 0; i--)
		printf("%d", (num >> i) & 1);
	printf("\n");
}

int main()
{
	// first operand << second operand
	// whose bits get right shifted << decides the number of places to shift the bits
	// when bits are shifted right then trailing positions are filled with zeros

	print_binary(3);
	printf("3 >> 1:\n");
	print_binary(3 >> 1);

	// right shifting is equivalent to division by 2^rightOperand
	// example:

	// var = 3;
	// var >> 1		Output: 1 [3 / 2^1]
}
