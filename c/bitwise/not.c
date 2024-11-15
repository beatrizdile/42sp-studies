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
	// the result of NOT is 0 when bit is 1 and 1 when bit is 0
	print_binary(7);
	printf("~7:\n");
	print_binary(~7);
}
