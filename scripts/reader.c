#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include<stdlib.h>

int main()
{
	char *buffer=(char *)calloc(100,sizeof(char));
	int disc_id = open("/mnt/g/LINUX/test.txt",O_RDONLY);
	read(disc_id,buffer,5);
	buffer[5]='\0';
	printf("Read:\n %s \n from file \n",buffer);
	close(disc_id);
	return 0;
}
