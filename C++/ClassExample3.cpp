#include<iostream>
using namespace std;
class Shape
{
	public:
	int side;
	float pi=3.14,radius;
	void getData()
	{
		cout<<"Enter radius to calculate area of circle  ";
		cin>>radius;
		cout<<"Enter side to calculate area of square ";
		cin>>side;
	}
	void calculateSquareArea()
	{
		cout<<"Area of Square is "<<2*side<<endl;	
	}	
	void calculateCircleArea()
	{
		cout<<"Area of circle is "<<pi*2*radius<<endl;
	}
};
int main()
{
	Shape s;
	s.getData();
	s.calculateCircleArea();
	s.calculateSquareArea();
	
	Shape s1;
	s1.getData();
	s1.calculateCircleArea();
	s1.calculateSquareArea();
}

