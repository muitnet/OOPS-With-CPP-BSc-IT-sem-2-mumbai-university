#include<iostream.h>
#include<conio.h>

class shape
{
public:
	virtual int getarea()=0;
	void setwidth(int w)
	{
		width=w;
	}
	void setheight(int h)
	{
		height=h;
	}
protected:
	int width;
	int height;
};

class rectangle:public shape
{
public:
	int getarea()
	{
		return(width*height);
	}
};

class triangle:public shape
{
public:
	int getarea()
	{
		return(width*height)/2;
	}
};

int main ()
{
	clrscr();
	rectangle rect;
	triangle tri;
	rect.setwidth(5);
	rect.setheight(7);
	cout<<"total rectangle area:"<<rect.getarea()<<endl;
	tri.setwidth(5);
	tri.setheight(7);
	cout<<"total triangle area :"<<tri.getarea()<<endl;
	getch();
	return 0;
}
