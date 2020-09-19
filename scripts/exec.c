#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	execl("/mnt/f/test","test",(char *)0);
	return 0;
}
