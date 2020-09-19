#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

int main()
{
	int disc_id = open("/mnt/g/LINUX/test.txt",O_WRONLY);
	write(disc_id,"Hello\n",strlen("Hello\n"));
	close(disc_id);
	return 0;
}
