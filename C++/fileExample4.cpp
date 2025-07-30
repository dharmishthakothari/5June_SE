#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file("test1.txt",ios::in|ios::app);
	string data;
	file>>data;
	cout<<data<<endl;
	file.close();
	file.open("test1.txt",ios::app);
	file<<"This is another text"<<endl;
	file.close();
	file.open("test1.txt",ios::in);
	while(file>>data)
		cout<<data<<endl;
	file.close();
}
