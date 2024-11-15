#include <stdio.h>

int main()
{
	// char	*map[5] = {	
	// 					"1111111",
	// 					"1000001",
	// 					"1001101",
	// 					"1N00101",
	// 					"1111111"
	// 				};

	// // for (int i = 0; i < 5; i++)
	// // 		printf("%s\n", map[i]);
	// printf("%c", map[3][1]);
	int i = 2;
	while((i--))
		printf("%i\n", i);
	
	printf("--------\n");
	int steps = 2;
	for (i = 0; i <= steps; i++)
	{
		printf("%d\n", i);
	}
}
