#include<iostream>
using namespace std;
int addition(int num1,int num2)
{
	return num1+num2;
}
float addition(int num1,int num2,float num3)
{
	return num1+num2+num3;
}
int main()
{
	int ans;
	float float_ans;
	ans=addition(12,23);
	cout<<ans<<endl;
	float_ans=addition(12,23,34.54f);
	cout<<float_ans<<endl;
	float_ans=addition(12,23.34f,34.54);
	cout<<float_ans<<endl;
	ans=addition(12,23.23,213,23,34);
	cout<<ans<<endl;
	
}
