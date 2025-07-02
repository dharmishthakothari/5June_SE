#include<stdio.h>
#include<string.h>
int main()
{
	char firstName[]="Dharmishtha";
	char lastName[]="Kothari";
	int len;
	
	len=strlen(firstName);
	printf("%d",len);
	
	strcat(firstName,lastName);
	printf("%s",firstName);
	
	len=strlen(firstName);
	printf("%d",len);
	
	char company[]="Tops";
	
	strcat(firstName,company);
	printf("%s",firstName);
}
