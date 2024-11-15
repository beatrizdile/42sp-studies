#include <string.h>
#include <stdio.h>
#include <errno.h>

// strerror(): returns the error number as a string
// perror(): adds a ":" and error msg at the end of the str

// the CORRECT way to display error messages is in the STDERR
// use: fprintf(stderr, "Error: %s", strerror(errno));

int	main(void)
{
	FILE *fh;

	printf("Errno before: %d\n", errno);
	fh = fopen("this_file_doesnt_exist.txt", "r");

	if (fh == NULL)
	{
		printf("Errno after: %d\n\n", errno);

		printf("1 - Error msg: %s\n", strerror(errno));
		perror("2 - Error msg");
		fprintf(stderr, "3 - Error msg: %s\n", strerror(errno));
	} else fclose(fh);
}