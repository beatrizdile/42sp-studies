#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	pid = fork();
	if (pid == -1) {
		return (1);
	}
	if (pid == 0) {
		// Child process
		int	file = open("ping-results.txt", O_WRONLY | O_CREAT, 0777);
		printf("The fd to ping-results.txt: %d\n", file);
		dup2(file, STDOUT_FILENO);
		close(file);
	
		int	err = execlp("ping", "ping", "-c", "3", "google.com", NULL);
		if (err == -1) {
			printf("Could not find program to execute!\n");
			return (2);
		}

	} else {
		// Parent process
		int	wstatus;
		wait(&wstatus);
		if (WIFEXITED(wstatus)) {
			int	statusCode = WEXITSTATUS(wstatus);
			if (statusCode == 0) {
				printf("Success!\n");
			} else {
				printf("Failure with status code %d\n", statusCode);
			}
		}
		printf("Post processing happens here!\n");
	}
	return (0);
}
