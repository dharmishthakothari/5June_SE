#include<stdio.h>
#include<string.h>
struct Department 
{
	int dept_no;
	char dept_name[20];
};
struct Employee
{
	int id;
	char name[20];
	int salary;
	struct Department dept;
};
int main()
{
	struct Department dept,dept1;
	strcpy(dept.dept_name,"sales");
	dept.dept_no=101;
	
	strcpy(dept1.dept_name,"Admin");
	dept1.dept_no=1001;
	
	struct Employee e1,e2,e3;
	e1.id=8;
	strcpy(e1.name,"Rakesh");
	e1.salary=20000;
	e1.dept=dept;
	
	
	e2.id=88;
	strcpy(e2.name,"Ronit");
	e2.salary=2000;
	e2.dept=dept;
	
	e3.id=888;
	strcpy(e3.name,"Rohit");
	e3.salary=12000;
	e3.dept=dept1;
	
	printf("%d ----> %s  ----> %d  ",e1.id,e1.name,e1.salary);
	printf("%d ---> %s ",e1.dept.dept_no,e1.dept.dept_name);
	printf("\n\n\n");
	printf("%d ----> %s  ----> %d  ",e2.id,e2.name,e2.salary);
	printf("%d ---> %s ",e2.dept.dept_no,e2.dept.dept_name);
	printf("\n\n\n");
	printf("%d ----> %s  ----> %d  ",e3.id,e3.name,e3.salary);
	printf("%d ---> %s ",e3.dept.dept_no,e3.dept.dept_name);
	
	
	
}
