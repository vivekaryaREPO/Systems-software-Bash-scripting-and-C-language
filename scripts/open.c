#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int main()
{
	//I have been coding in WSL windows 10
	int disc_id = open("/mnt/g/LINUX/test.txt",O_CREAT);
	close(disc_id);
	return 0;
}
