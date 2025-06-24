#include<stdio.h>
int main(){
	int matrix[3][3];
	int row,col,num=5,count=1,n=1;
	
	for(row=0;row<3;row++)
	{
		printf("\n");
		count=1;
		for(col=0;col<3;col++)
		{
			matrix[row][col]=num*n*count;
			printf("  %d",matrix[row][col]);
			count++;
		}
		n*=10;
	}
}

		
