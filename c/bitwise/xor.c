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
	// Exclusive OR - XOR
	// either A is 1 or B is 1 then the output is 1 but when both A and B are 1
	// then output is 0
	// EXCLUDING both
	// A	B		 A XOR B
	// 0	0			0
	// 0	1			1
	// 1	0			1
	// 1	1			0

	print_binary(7);
	print_binary(4);
	printf("7 ^ 4:\n");
	print_binary(7 ^ 4);

	// result of XOR is 1 when two bits are different otherwise the result is 0
}
