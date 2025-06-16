#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter number ");
	scanf("%d",&num);
	printf("Multiply upto number ...");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
		
	}
}
