#include<iostream>
using namespace std;
class First
{
	private:
	int number;
	public:
		First(){
			number=900;
		}
		First(int number)
		{
			this->number=number;
		}
	void getData()
	{
		cout<<number;
	}
	
	// Second class it is using private data of First class
//but reverse is not true 
//First class can not use private data of Second class
	
	friend class Second;
};
class Second
{
	public :
		void displayDataSecond(First f)
		{
			cout<<"From second class "<<f.number;
		}
		void put(First f)
		{
			cout<<f.number;
		}
};

int main()
{
	First f(100);
	Second s;
	First f1;
	s.displayDataSecond(f1);
}
