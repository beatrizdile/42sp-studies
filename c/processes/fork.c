#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int	main(int argc, char **argv)
{
	int	id;
	int	n;

	id = fork();
	if (id == 0)
		n = 1;
	else
		n = 6;
	if (id != 0)
		wait(NULL);
	for (int i = n; i < n + 5; i++)
		printf("%d ", i);
	if (id != 0)
		printf("\n");
	return (0);
}
