#include <iostream.h>
#include<conio.h>

class time
{
	int hr,min,sec;
	public:
		void get()
		{
			cin>>hr>>min>>sec;
		}
		void disp()
		{
			cout<<hr<<"hr:"<<min<<"min:"<<sec<<"sec";

		}
		 friend time operator+(time,time);
};
time operator+(time t1,time t2)
{
	time t3,t4,t5,t6;
	t5.sec=t1.sec+t2.sec;
	t4.min=t5.sec/60;
	t4.sec=t5.sec%60;
	t5.min=t1.min+t2.min;
	t6.hr=t5.min/60;
	t6.min=t5.min%60;
	t3.sec=t4.sec;
	t3.min=t4.min+t6.min;
	t3.hr=t1.hr+t2.hr+t6.hr;
	return t3;
}
void main()
{
	clrscr();
	time t1,t2,t3;
	cout<<"Enter 1st time(In Hr,Min and Sec): ";
	t1.get();
	cout<<"Enter 2nd time(In Hr,Min and Sec): ";
	t2.get();
	cout<<"The 1st time is : ";
	t1.disp();
	cout<<"\nThe 2nd time is : ";
	t2.disp();
	t3=t1+t2;
	cout<<"\nThe resultant time is ";
	t3.disp();
	getch();
}