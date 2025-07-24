#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual	void display()
		{
			cout<<"In shape class"<<endl;
						cout<<"In shape class"<<endl;

			cout<<"In shape class"<<endl;

		}
		void display1()
		{
			cout<<"in shape "<<endl;
		}
};
class Rectangle : public Shape
{
	public:
		void display ()override 
		{
			//Shape::display();
			cout<<"In rectange "<<endl;
		}
};
class Circle :public Shape
{
	public:
		void display()
		{
			cout<<"in Circle  "<<endl;
		}
};
int main()
{
	Shape *s;
	Rectangle rec;
	s=&rec;
	s->display();
	rec.display();
	Circle cir;
	cir.display();
	s=&cir;
	s->display();
}
