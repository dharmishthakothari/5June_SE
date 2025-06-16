#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("\n%d-->Even",i);
		}
		else
			printf("\n%d-->Odd",i);
	}
}
