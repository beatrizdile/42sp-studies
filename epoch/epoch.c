#include <sys/time.h>
#include <stdio.h>

int main()
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	printf("%ld\n", tv.tv_sec);
	return (0);
}
