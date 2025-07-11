#include<iostream>
using namespace std;
int main()
{
	int a=100,b=25,ans;
	//arithmatic operator
	cout<<"a+b "<<a+b<<endl;
	cout<<"a-b "<<a-b<<endl;
	cout<<"a*b "<<a*b<<endl;
	cout<<"a/b "<<a/b<<endl;
	bool ans1=a>b;
	cout<<"a>b "<<ans1<<endl;
	ans1=a<b;
	cout<<"a<b "<<ans1<<endl;
	ans=a>b && a>10;
	cout<<ans<<endl;
	ans=a>b || a>10;
	cout<<ans<<endl;
	
	
}
