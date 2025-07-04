#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],name1[20];
	int i,choice,ans;
	//printf("%s",gets(name));
	
	printf("\n1. Length");
	printf("\n2. Concat");
	printf("\n3. Copy");
	printf("\n4. Compare ");
	printf("\n5. Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	
			printf("Enter name");
		//gets(name2);
				scanf("%s",name);
				
				int len=strlen(name2);
				printf("\nThe length of %s is %d ",name2,len);
				break;
		case 2:printf("Enter string1 and string2 ");
				scanf("%s%s",name,name1);
				strcat(name,name1);
				printf("After concating string is %s ",name);
				break;
		case 3:printf("Enter name ");
				scanf("%s",name);
				strcpy(name1,name);
				printf("String is copied %s",name1);
				break;
		case 4:printf("Enter string 1 and string 2 ");
				scanf("%s%s",&name,name1);
				ans=strcmp(name,name1);
				if(ans==0)
				{
					printf("Strings are equal ");
				}
				else
					printf("String are not equal");
				break;
		default : printf("Enter valid choice");
		
	}
	
}
