#include <iostream>
using namespace std;

class Quadrilateral
{
public:
	Quadrilateral()
	{
	cout << "This is a Quadrilateral" << endl;
	}
};
class Trapezoid: public Quadrilateral
{ public:
	Trapezoid(){
	cout<<"This is a Trapezoid"<<endl;
  }
};

class Parallelogram: public Trapezoid{
public:
	Parallelogram()
	{
	cout<<"This is a Parallelogram"<<endl;
	}
};

class Rectangle: public Parallelogram{
public:
	Rectangle()
	{
	cout<<"This is a Rectangle"<<endl;
	}
};

class Square: public Rectangle{
public:
	Square()
	{
	cout<<"This is a Rectangle"<<endl;
	}
};

int main()
{
	Square obj;
	return 0;
}