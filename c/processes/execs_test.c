#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// echo $PATH -  to find the location of the command ping
// execl - need to specify the path of the command as a parameter
// execlp - finds the path of the command passed
// execvp - use an array with the paremeters in it
// execvpe - add environment variable as parameter

// v - vector, use an array as parameter
// p - use the PATH variable to find command
// e - environment variable

// you can set any environment variable you want during execution:
// $>USER=bibi ./a.out
// if you set PATH to something else the program will not be able to execute haha
// $>PATH=NULL USER=bibi ./a.out

int	main(int argc, char **argv, char *env[])
{
	//char *const	arr[] = {"env", NULL, NULL};
	// char *const	arr[] = {"ping", "google.com", NULL};

	// execl("/usr/bin/ping",
	// 	   "/usr/bin/ping",
	// 	   "google.com",
	// 	   NULL);

	// execlp("ping",
	// 	  "ping",
	// 	  "google.com",
	// 	  NULL);

	// execvp("ping",
	// 		arr);

	//execvpe("env", arr, env);

	while(*env) {
		printf("%s\n", *env);
		env++;
	}

	printf("Exec was not executed.\n");
	return (0);
}
