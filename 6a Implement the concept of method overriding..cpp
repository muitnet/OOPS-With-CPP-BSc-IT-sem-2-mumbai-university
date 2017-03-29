#include<iostream.h>
#include<conio.h>

class BaseClass
{
	public:
	void Display()
	{
		cout<<"\n\tThis is Display() method of BaseClass";
	}
	void Show()
	{
		cout<<"\n\tThis is Show() method of BaseClass";
	}
};

class DerivedClass:public BaseClass
{
	public:
	void Display()
	{
		cout<<"\n\tThis is Display() method of DerivedClass";
	}
};

void main()
{
	clrscr();
	DerivedClass Dr;
	Dr.Display();
	Dr.Show();
	getch();
}
