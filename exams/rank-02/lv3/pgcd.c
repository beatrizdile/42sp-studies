#include <stdio.h>
#include <stdlib.h>

int	main(int	argc, char	**argv)
{
	int	num1 = 0;
	int	num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 > 0 && num2 > 0)
		{
			while (num1 != num2)
			{
				if (num1 > num2)
					num1 -= num2;
				else
					num2 -= num1;
			}
			printf("%d", num1);
		}
	}
	printf("\n");
	return (0);
}
