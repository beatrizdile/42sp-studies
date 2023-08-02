#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>

// The wait() function only waits for one child process
// Our parent here has two children to wait for

int	main(int argc, char **argv)
{
	int	id1 = fork();
	int id2 = fork();
	if (id1 == 0) {
		if (id2 == 0)
			printf("We are process y\n");
		else
			printf("We are process x\n");
	} else {
		if (id2 == 0)
			printf("We are process z\n");
		else
			printf("We are the parent process!\n");
	}
	while (wait(NULL) != -1 || errno != ECHILD) {
		printf("Waited for a child to finish\n");
	}
	return (0);
}