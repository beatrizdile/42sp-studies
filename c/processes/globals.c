#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void func(int *global, int pid);

int main()
{
	int pid;
	int var;

	var = 42;
	printf("antes pai: %d\n", var);
	pid = fork();
	if (pid == 0)
		func(&var, pid);
	waitpid(pid, &var, 0);
	// while(wait(&g_lobal) > 0)
	// 	continue;
	printf("depois pai: %d\n", var);
	if (WEXITSTATUS(var))
		var = WEXITSTATUS(var);
	printf("depois2 pai: %d\n", var);
	exit(var);
}

void func(int *var, int pid)
{
	if (pid == 0)
		*var = 666;
	exit(127);
}