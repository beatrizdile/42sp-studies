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
	// whose bits get left shifted << decides the number of places to shift the bits
	// when bits are shifted left then trailing positions are filled with zero

	print_binary(3);
	printf("3 << 2:\n");
	print_binary(3 << 2);

	// left shifting is equivalent to multiplication by 2^rightOperand
	// example:

	// var = 3;
	// var << 1		Output: 6 [3 x 2^1]
}
