#include<iostream>
using namespace std;
class Person
{
	int contact_no;
	
	public:
	string name,address;
	int getContactNo()
	{
		return contact_no;
	}
	void getDetails()
	{
		cout<<"Enter name and address ";
		cin>>name>>address;
	}
	void setContactNo(int cNo)
	{
		contact_no=cNo;
	}
	void display()
	{
		cout<<name<<"\t"<<address<<"\t"<<contact_no<<endl;
	}
};
int main()
{
	Person p;
	
	p.setContactNo(234567);
	p.getDetails();
	p.display();
}


