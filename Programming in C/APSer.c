#include<stdio.h>
int main()
{
	int start_number;
	int diffrence;
	int no_of_element,i,ans;
	printf("Enter starting number,Difference and no_of_element ");
	scanf("%d%d%d",&start_number,&diffrence,&no_of_element);
	for(i=1;i<=no_of_element;i++)
	{
		printf("    %d",start_number);
		ans=start_number+diffrence;
		start_number=ans;
	}
}
