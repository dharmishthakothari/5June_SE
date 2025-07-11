#include<iostream>
#include<string>
using namespace std;
class Person
{
	public:
	int contact_no,roll_no;
	string name;
};
int main()
{
	//cout console output
	//namespace 
	Person diya;
	
	cout<<"Please enter name ";
	cin>>diya.name;
	cout<<"Please enter contact number ";
	cin>>diya.contact_no;
	
//	cout<<"Hello World"<<endl;
//	cout<<"This is Friday \n ";
//	cout<<"This is C class ";
	
	cout<<diya.contact_no<<"\t"<<diya.name;
	
}
