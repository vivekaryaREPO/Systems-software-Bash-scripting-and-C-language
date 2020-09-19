#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	
	pid_t child_id=fork();
	if(child_id)
		printf("The Parent processs id is: %u \n", getpid());
	else
		printf("The Child process id is: %u \n",getpid());		
	return 0;
}
