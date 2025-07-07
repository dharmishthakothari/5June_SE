#include<stdio.h>
int main()
{
	FILE *file;
	char data[256];
	file=fopen("example.txt","r");
	//file=fopen("example.txt","w");
	//file=fopen("example.txt","a");
	if(file!=NULL)
	{
		//fgets read line at a time
//		while(fgets(data,sizeof(data),file)!=NULL)
//			{
//			
//			printf("%s",data);
//	
//	}
		int ch;
		while(ch!=EOF)
		{	
			ch=fgetc(file);
			printf("%c",ch);
		}
		

		}
}
