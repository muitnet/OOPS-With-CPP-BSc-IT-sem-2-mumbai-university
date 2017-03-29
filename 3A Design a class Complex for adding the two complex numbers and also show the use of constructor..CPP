#include<iostream.h>
#include<conio.h>

class complex
{

	public:
	 int img,rel;
	 complex()
	 {
		 rel=0;
		 img=0;

	 }
	 void add(complex,complex);
	 void display();
};

void complex::display()
{
	cout<<"the sum of complex number is "<<rel<<"+i"<<img;

}

void complex::add(complex a,complex b)
{

	rel=a.rel+b.rel;
	img=a.img+b.img;

}

void main()
{
	clrscr();
	complex a,b,c;
	cout<<"input for A real"<<endl;
	cin>>a.rel;
	cout<<"input for A img"<<endl;
	cin>>a.img;
	cout<<"input for B real"<<endl;
	cin>>b.rel;
	cout<<"input for B img"<<endl;
	cin>>b.img;
	c.add(a,b);
	c.display();
	getch();
}