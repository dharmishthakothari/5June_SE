#include<stdio.h>
int main()
{
	FILE *file;
	file=fopen("example.txt","a");
	char data[50]="My C Classs is going on";
	int i;
	if(file!=NULL)
	{
		printf("File opened...");
		
		i=fprintf(file,data);
		printf("Data written successfully %d ",i);
		
	}else
		printf("File not opened...");
	
}
