#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outputFile("F:\\FFOutput\\test.txt");
	if(outputFile!=NULL)
	{
		cout<<"File created successfull "<<endl;		
	}
	outputFile<<"gretting s for the day!!!\n"<<endl;
	outputFile<<"This is Tuesday"<<endl;
	outputFile<<"C++ class ";
	outputFile<<"File handling topic ";
	
	cout<<"Data written ";

}

