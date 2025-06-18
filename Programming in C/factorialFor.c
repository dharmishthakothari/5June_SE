#include<stdio.h>
int main()
{
	
	int num,i=1,mul;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		mul*=i;
		printf("%d\n",mul);
		
	}
	printf("Ans = %d ",mul);
}
