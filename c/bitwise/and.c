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
	// the result of AND operation is 1 when both bits are 1
	print_binary(7);
	print_binary(4);
	printf("7 & 4:\n");
	print_binary(7 & 4);
}
