#include<stdio.h>
int main()
{
	int num,i;
	printf("Please enter no to stop (1-10) ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
		if(i==num)
			break;
	}
}
