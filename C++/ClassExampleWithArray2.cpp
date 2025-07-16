#include<iostream>
using namespace std;
class Employee
{
	public:
		int eid,salary;
		string name;
		void getDetails()
		{
			cout<<"Enter ID name and salary ";
			cin>>eid>>name>>salary;
		}
		void display()
		{
			cout<<eid<<"\t"<<name<<"\t"<<salary<<endl;
		}
};
int main()
{
	Employee e[10];
	int n,total_salary;
	cout<<"Enter no of employee ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].getDetails();
	}
	for(int i=0;i<n;i++)
	{
		total_salary+=e[i].salary;
	}
	cout<<"Total Salary "<<total_salary<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(e[i].eid>=1 && e[i].eid<=10)
		{
			e[i].display();
		}
	}
	
	
}
