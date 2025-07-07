#include<stdio.h>
#include<string.h>
int main()
{
	FILE *file;
	file=fopen("example.txt","w");
	char data[50];
	int i;
	char end[]="END";
	if(file!=NULL)
	{
		printf("File opened...");
		while(strcmp(data,end)!=0)
		{
		
			printf("Enter END to end Data ");
			gets(data);
			i=fprintf(file,data);
			
		}
			printf("Data written successfully %d ",i);
		
	}else
		printf("File not opened...");
	
}
