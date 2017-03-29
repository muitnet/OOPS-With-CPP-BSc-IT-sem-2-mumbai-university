#include<iostream.h>
#include<conio.h>

class Shape
{
protected:
	float width, height;
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};

void main ()
{	
	clrscr();
	Rectangle rect;
	Triangle tri;
	rect.set_data (5,3);
	tri.set_data (2,5);
	cout <<"\narea of reactangle= "<< rect.area() << endl;
	cout <<"\narea of triangle= "<< tri.area() << endl;
	getch();
}