#include<stdio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int x=1,y=2;
	printf("%d %d \n",x,y);
	swap(&x,&y);
	printf("%d %d \n",x,y);
return 0;
}

