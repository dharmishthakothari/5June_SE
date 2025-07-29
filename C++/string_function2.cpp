#include<iostream>
using namespace std;
int main()
{
	string name="Tops Technologies";
	string name1="Tops Technologies";
	cout<<name.find("tech")<<endl;
	int i=name.compare(name1);
	cout<<i<<endl;
	name.replace(1,20,"Tech");
	cout<<name<<endl;
	cout<<name1.substr(4,7);
}
