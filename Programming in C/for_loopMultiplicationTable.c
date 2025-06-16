#include<stdio.h>
int main()
{
	int i,mul,num;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
    {
    	//mul=5*i;
		printf("%d * %d = %d\n",num,i,num*i);
	}		
}
