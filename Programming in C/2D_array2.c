#include<stdio.h>



int main()
{
	int row,col,i,j;
	printf("Please enter no of row...");
	scanf("%d",&row);
	printf("Please enter no of col...");
	scanf("%d",&col);
	int array[row][col],array2[row][col],ans[row][col];
	printf("\nFirst Array\n ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element of [%d][%d]",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nSecond Array\n");
for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element of [%d][%d]",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	int sum;
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			if(i==j)
				sum=sum+array[i][j]+array2[i][j];
		}
	}
	printf("sum = %d ",sum);
}
	
