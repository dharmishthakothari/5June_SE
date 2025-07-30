#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile("F:\\FFOutput\\test.txt");
	if(inFile!=NULL)
	{
		cout<<"File is opened  "<<endl;		
	}
	string word;
	//inFile>>word;
	while(getline(inFile,word))
	{
		cout<<word;
	}
	
	ofstream outFile("test1.txt",ios::app);
	string data;
	cout<<"For Writing "<<endl;
	
	cout<<"Please enter String to write "<<endl;
	do
	{
		
		cin>>data;
		outFile<<data;
	}while(data!="END");
	
	
	
}

