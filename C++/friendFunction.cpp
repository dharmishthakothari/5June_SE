#include<iostream>
using namespace std;
class First
{
	private:
	int number;
	public:
		First(int number)
		{
			this->number=number;
		}
	void getData()
	{
		cout<<number;
	}
	friend void displayData(First obj);

};
void displayData(First obj)
{
	cout<<"From friend function "<<obj.number;
}
int main()
{
	First f(100);
	displayData(f);
}
