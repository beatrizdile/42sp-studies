#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	handler(int num)
{
	write(STDOUT_FILENO, "I won't die\n", 13);
}

int	main(void)
{
	signal(SIGINT, handler);
	signal(SIGTERM, handler);
	while (1)
	{
		printf("Wasting your time. %d\n", getpid());
		sleep(1);
	}
}
