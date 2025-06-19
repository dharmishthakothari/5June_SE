#include<stdio.h>
int main()
{
	int i;
	for(i=6;i<=10;i++)
	{
		printf("%d ",i);
		if(i%5==0)
			goto dhruv;
		
	}
	dhruv:
		printf("\nThis is Divisable by 5");
}
