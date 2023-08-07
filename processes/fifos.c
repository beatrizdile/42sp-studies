#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>

// when executing this code, it will stop at the "opening" message,
// to make this code end execution we need to open another terminal
// and type "cat myfifo", this is because, it's only possible to
// write to a fifo if the fifo is also being read somewhere.

int	main(void)
{
	if (mkfifo("myfifo", 0777) == -1) {
		if (errno != EEXIST) {
			printf("Could not create fifo file.\n");
			return (1);	
		}
	}
	printf("Opening...\n");
	int fd = open("myfifo", O_WRONLY);
	if (fd == -1) {
		printf("Not able to open.\n");
		return (2);
	}
	printf("Opened\n");
	int	x = 'B';
	write(fd, &x, sizeof(x));
	printf("Written\n");
	close(fd);
	printf("Closed\n");

	return (0);
}