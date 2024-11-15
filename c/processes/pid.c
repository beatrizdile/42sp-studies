#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

// getpid: ID of the current process
// getppid: ID of the parent process
// wait() returns the process ID that you waited for
// there are no children to wait for if wait() returns -1

int	main(int argc, char **argv)
{
	int	id = fork();
	if (id == 0)
		sleep(1);

	printf("Current ID: %d, Parent ID: %d\n",
			getpid(), getppid());
	int	res = wait(NULL);
	if (res == -1)
		printf("No children to wait for.\n");
	else
		printf("The %d finished execution.\n", res);
	return (0);
}
