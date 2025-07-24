#include<iostream>
using namespace std;
class Number

{
	int data;
	public:
	bool operator!()
	{
		if (data>0)
			return 0;
		else
			return 1;
		
	}
};
int main()
{
	int a=-10;
	cout<<a<<endl;
	bool ans;
	ans=!a;
	int x=10,y=12;
	
	cout<<ans;
}
