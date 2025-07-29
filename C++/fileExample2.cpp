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
	while(inFile>>word)
	{
		cout<<word;
	}
	
}

