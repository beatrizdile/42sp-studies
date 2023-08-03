#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>

// fd[0] - read
// fd[1] - write

int main(int argc, char **argv)
{
	int fd[2];
	if (pipe(fd) == -1) {
		printf("An error ocurred with opening the pipe\n");
		return 1;
	}
	int id = fork();
	if (id == 0) {
		int x;
		printf("Input a number: ");
		scanf("%d", &x);
		write(fd[1], &x, sizeof(int));
		close(fd[1]);
	} else {
		int y;
		read(fd[0], &y, sizeof(int));
		close(fd[0]);
		printf("Got from child process: %d\n", y);
	}


}