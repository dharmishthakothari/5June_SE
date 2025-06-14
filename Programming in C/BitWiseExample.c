#include<stdio.h>
int main()
{
	int a=15,b=100;
	int ans;
	double pi=3.14;
	ans=a&b;
	printf("a&b%d\n",ans);
	printf("a|b%d\n",a|b);
	ans=sizeof(pi);
	printf("size of a is %d\n",sizeof(pi));
	ans=a>b?a:b;
	printf("ans=%d",ans);
		
	
}
