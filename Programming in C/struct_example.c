#include<stdio.h>
#include<string.h>
struct Person
{
	int roll_no;
	char name[20];
	int total;
};
int main()
{
	struct Person p[10];
	int i,n;
	printf("Enter number of Person ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter name ");
		scanf("%s",p[i].name);
	//strcpy(p.name,name);
		printf("Enter Roll number ");
		scanf("%d",&p[i].roll_no);
		printf("Enter Total marks ");
		scanf("%d",&p[i].total);
	}
	
	printf("This is detail...");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d  %s   %d ",p[i].roll_no,p[i].name,p[i].total);
	}
	
}
