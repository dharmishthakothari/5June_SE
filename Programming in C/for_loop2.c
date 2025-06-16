#include<stdio.h>
int main()
{
	int i;
	int j;
	for(i=0,j=1;i<=100;i+=5,j++)
	{
		printf("Hello %d \n",i);
		printf("j=%d ",j);
	}
}
