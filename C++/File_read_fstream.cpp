#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	string data;
	file.open("C:\\Users\\Admin\\Documents\\TASK\\first.txt",ios::in);
//	while(file>>data)
//	{
//		cout<<data;
//	}
	while(!file.eof())
	{
		file>>data;
		cout<<data;
	}
	
	
	file.close();
}
