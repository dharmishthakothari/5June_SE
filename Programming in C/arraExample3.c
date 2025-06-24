#include<stdio.h>
int main(){
	int matrix[2][3][2]={
			{ {1,2},{3,4},{5,6} },
			{  {11,22}, {33,44}, {55,66} }
			
	};
	int i,j,k;
	//depth
	for(i=0;i<2;i++)
	{
		//row
		printf("\n");
		for(j=0;j<3;j++)
		{
			//column
			printf("\n");
			for(k=0;k<2;k++)
				printf(" %d",matrix[i][j][k]);
		}
	}
}
