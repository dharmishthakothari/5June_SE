#include<stdio.h>
//return type :: float
//name :: add
//paramters :: 3 float
//function declaration
float add(float,float,float);
int checkPrime(int);
float add(float a,float b,float c)
{
	return a+b+c;
}
int checkPrime(int num)
{
	int i;
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	float sum;
	sum=add(12.23,23.45,56.45);
	printf("%f",sum);
	int num1=70;
	int ans;
	ans=checkPrime(num1);
	printf("%d ",ans);
	if(ans)
		printf("Number is prime");
	else
		printf("Number is not prime");
}


