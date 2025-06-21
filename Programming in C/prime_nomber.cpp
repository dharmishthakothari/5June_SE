#include<stdio.h>
int main()
{
	int i,num,temp,sum;
	printf("Please enter number ");
	scanf("%d",&num);
	
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			temp=1;
			//printf("\nNot prime");
			break;
		}
		else
		{
			temp=0;
			//printf("\nPrime number");
		}
	}
	if(temp==1)
		printf("Not prime number");
	else
		printf("Prime number");
	}
	

