#include<stdio.h>
#include<string.h>
int main()
{
	//char name[20]="Dharmihstha";
	//printf("%s",name);
	char name[100];
	printf("Enter message ");
	//scanf("%s",&name);
	gets(name);
	printf("You have entered %s",name);
	
}
