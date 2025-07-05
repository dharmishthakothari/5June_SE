#include<stdio.h>
int main()
{
	FILE *file;
	char data[20];
	file=fopen("example.txt","r");
	if(file!=NULL)
	{
		fgets(data,100,file);
		printf("%s",data);
	}
}
