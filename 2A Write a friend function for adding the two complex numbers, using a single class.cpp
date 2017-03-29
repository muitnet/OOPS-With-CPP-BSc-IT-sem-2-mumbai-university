#include<iostream.h>
#include<conio.h>

class complex
{
	
	public:
	 int img,rel;
	 void getno()
	 {
		 cout<<"enter the real and imaginary number:";
		 cin>>rel>>img;
		 
	 }
	 friend complex sum(complex,complex);
	 void display();	 
};

void complex::display()
{
	cout<<"the sum of complex number is "<<rel<<"+i"<<img;
	
}

complex sum(complex a,complex b)
{
	complex t;
	t.rel=a.rel+b.rel;
	t.img=a.img+b.img;
	return t;
}

void main()
{
	clrscr();
	complex a,b,c;
	a.getno();
	b.getno();
	c=sum(a,b);
	c.display();
	getch();
}