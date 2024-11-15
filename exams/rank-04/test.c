#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int err(char **str)
{
	while(*str)
		write(2, str++, 1);
	return 1;
}

int cd(char **argv, int i)
{
	if (i != 2)
		return err("error");
	else if (chdir(argv[1]) == -1)
		return err("error");
	return 0;
}

int exec(char **argv, char **envp, int i)
{
	int fd[2];
	int status;
	int has_pipe = argv[i] && !strcmp(argv[i], "|");

	if (has_pipe && pipe(fd) == -1)
		return err("error: fatal\n");
	
	int pid = fork();

	return WIFEXITED(status) && WEXITSTATUS(status);
}