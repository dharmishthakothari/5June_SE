#include<iostream>
using namespace std;
class Person
{
	public :
		string name,address;
		int c_no;
		void getDetails()
		{
			
			cout<<"Enter name address and Contact no ";
			cin>>name>>address>>c_no;
		}
		void display()
		{
			cout<<name<<"\t"<<address<<"\t"<<c_no<<endl;
		}
};
int main()
{
	Person p[10];
	for(int i=0;i<5;i++)
	{
		p[i].getDetails();
		
	}
	for(int i=0;i<5;i++)
	{
		p[i].display();
	}
}

