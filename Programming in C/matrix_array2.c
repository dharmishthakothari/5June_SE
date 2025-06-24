#include<stdio.h>
int main(){
	int matrix[3][3]={{11,22,33},{61,52,42},{76,89,45}};
	int row,col;
	for(row=0;row<3;row++)
	{
		printf("\n");
		for(col=0;col<3;col++)
		printf(" %d",matrix[row][col]);
	}
}
