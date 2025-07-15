#include<iostream>
using namespace std;
class Person
{
	public:
	int contact_no;
	string name,address;
	void getDetails()
	{
		cout<<"Enter name ";
		cin>>name;
		cout<<"Enter address ";
		cin>>address;
		cout<<"Enter contact no ";
		cin>>contact_no;
	}
	void display()
	{
		cout<<name<<"\t"<<contact_no<<"\t"<<address<<endl;
	}
	
};
int main()
{
	Person p1;
	p1.getDetails();
	
	
	Person p2;
	p2.getDetails();
	cout<<"Person Details  "<<endl;
	p1.display();
	p2.display();
	
}
