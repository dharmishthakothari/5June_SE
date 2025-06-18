#include<stdio.h>
int main()
{
	int num,i=1,add=0;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		add+=i;
	}
	printf("Ans = %d ",add);
}
