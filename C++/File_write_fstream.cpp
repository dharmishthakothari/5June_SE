#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	
	file.open("C:\\Users\\Admin\\Documents\\TASK\\first.txt",ios::out);
	file<<"THis is my content to write \n ";
	file<<" \"Greetings\" for the day!!! \n";
	file<<"Bye";
	cout<<"Data written successfully ";
	
	file<<"Nisha";
	file.close();
}
