#include<stdio.h>
#include<string.h>
int main()
{
	char name[20]="Manaaaa";
	char name1[20]="Manahar";
	int val;
	val=strcmp(name,name1);
	printf("%d",val);
	if(val==0)
	{
		printf("Both String are Equal");
	}else if(val==1)
	{
		printf("%s is bigger then %s ",name 	,name1);
	}else 
	printf("%s is bigger then %s ",name1,name);
	
}
	
