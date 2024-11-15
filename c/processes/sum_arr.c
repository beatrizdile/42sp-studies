#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>

// dividing an array into two parts and each 
// process sums half of it
// using pipe so the child gives the result to the parent

int main(void) 
{
	int arr[] = {1, 2, 3, 4, 1, 2, 7, 7};
	int	arrSize = sizeof(arr) / sizeof (int);
	int	start, end;
	int fd[2];
	if (pipe(fd) == -1) {
		return (1);
	}

	int id = fork();
	if (id == -1) {
		return (2);
	}

	if (id == 0) {
		start = 0;
		end = start + arrSize / 2;
	}
	else {
		start = arrSize / 2;
		end = arrSize;
	}

	int	sum = 0;
	int i;
	for (i = start; i < end; i++) {
		sum += arr[i];
	}

	printf("Calculated partial sum: %d\n", sum);

	if (id == 0) {
		close(fd[0]);
		write(fd[1], &sum, sizeof(sum));
		close(fd[1]);
	} else {
		int	sumFromChild;
		close(fd[1]);
		read(fd[0], &sumFromChild, sizeof(sumFromChild));
		close(fd[0]);

		int total = sum +sumFromChild;
		printf("Total sum is %d\n", total);
		wait(NULL);
	}

	return (0);
}