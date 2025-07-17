#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	string data;
	file.open("C:\\Users\\Admin\\Documents\\TASK\\first.txt",ios::in);
	file.seekg(9);
	cout<<file.tellg();
	file>>data;
	cout<<"After read data "<<data<<"\t"<<file.tellg()<<endl;
	file>>data;
	cout<<"After reading data "<<data<<"\t"<<file.tellg();
	

	file.close();
}
