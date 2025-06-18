#include<stdio.h>
int main()
{
	int num,i=1,add=0,num1,num2;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Enter number ");
		scanf("%d",&num1);
		add=add+num1;
	}
	printf("Addition is %d",add);
}
