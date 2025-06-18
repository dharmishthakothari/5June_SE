#include<stdio.h>
int main()
{
	int num,i=1,mul;
	printf("Enter number ");
	scanf("%d",&num);
	while(i<=num)
	{
		mul=mul*i;
		i++;
	}
	printf("%d",mul);
}
