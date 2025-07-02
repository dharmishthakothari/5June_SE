#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char new_name[20];
	printf("Enter Name ");
	gets(name);
	strcpy(new_name,name);
	printf("Copied Name is %s ",new_name);
	
	char msg[]="Great going";
	char new_msg[20];
	strncpy(new_msg,msg,25);
	printf("\n%s ",new_msg);
}
