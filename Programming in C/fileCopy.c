#include<stdio.h>
#include<string.h>
int main()
{
	FILE *desFile,*srcFile;
	desFile=fopen("example1.txt","a");
	char data[50];
	srcFile=fopen("example.txt","r");
	if(srcFile!=NULL)
	{
		while(fgets(data,100,srcFile)!=NULL)
		{
			fprintf(desFile,data);
		}
		printf("Data copied successfully");
	}
	fclose(srcFile);
	fclose(desFile);
}
