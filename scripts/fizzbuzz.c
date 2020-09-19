#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<101;i++)
	{
		if((!(i%3))&&(!(i%5)))
			printf("fizzbuzz\n");
                else if(!(i%3))
			 printf("fizz\n");
		else if(!(i%5))
			printf("buzz\n");
		else
			printf("%d\n",i);
	}
	return 0;
}
