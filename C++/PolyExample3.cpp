#include<iostream>
using namespace std;
class Person
{
	int id,contact_no;
	string name,address;
	public:
	Person()
	{
		cout<<"Welcome!!!"<<endl;
		id=0;
		contact_no=0;
		name="";
		address="";
	}
	Person(int id1,string name1)
	{
		id=id1;
		name=name1;
	}
	Person(int id1,string name1,string address1,int i)
	{
		id=id1;
		
		name=name1;
		address=address1;
		contact_no=c_no;
	}
	void display()
	{
		cout<<id<<"\t"<<name<<"\t"<<address<<"\t"<<contact_no<<endl;
	}
};
int main()
{
	Person p;
	p.display();
	Person p1(11,"P1");
	p1.display();
	Person p2(12,12345,"P2","CG Road");
	p2.display();

	
}
