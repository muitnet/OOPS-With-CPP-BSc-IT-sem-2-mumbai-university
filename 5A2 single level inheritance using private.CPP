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

class Rectangle: private Shape
{
public:
	float area ()
	{
	set_data (5,3);
	return (width * height);
	}
};

class Triangle: private Shape
{
public:
	float area ()
	{
		set_data (2,5);
		return (width * height / 2);
	}
};

void main ()
{
	clrscr();
	Rectangle rect;
	Triangle tri;

	cout <<"\narea of reactangle= "<< rect.area() << endl;
	cout <<"\narea of triangle= "<< tri.area() << endl;
	getch();
}