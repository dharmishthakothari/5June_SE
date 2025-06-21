#include<stdio.h>
void main()
{
	//declaration
	int numbers[5];
	//initilization 
	numbers[0]=1;
	numbers[1]=67;
	numbers[2]=450;
	numbers[3]=67;
	numbers[4]=450;
	
	//declaration and initlization
	int ids[]={101,102,103,104,60,345};

	//printf("\n%d",ids[2]);
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",numbers[i]);
	}
	
}
