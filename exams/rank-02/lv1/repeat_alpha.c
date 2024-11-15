#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i = 0;
	int	diff;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				diff = (argv[1][i] - 'a') + 1;
				while (diff != 0)
				{
					write(1, &argv[1][i], 1);
					diff--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				diff = (argv[1][i] - 'A') + 1;
				while (diff != 0)
				{
					write(1, &argv[1][i], 1);
					diff--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
