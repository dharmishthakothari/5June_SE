#include<stdio.h>
int main(){
	int matrix[3][3];
	int row,col;
	matrix[0][0]=11;
	matrix[0][1]=22;
	matrix[0][2]=33;
	
	//second row 
	matrix[1][0]=21;
	matrix[1][1]=31;
	matrix[1][2]=41;
	
	//third row 
	matrix[2][0]=62;
	matrix[2][1]=72;
	matrix[2][2]=82;
	
	for(row=0;row<3;row++)
	{
		printf("\n");
		for(col=0;col<3;col++)
			printf("   %d",matrix[row][col]);
	}
}

