#include<iostream.h>
#include<conio.h>

class student
{
	char name[20],div[5],std[10],add[20];
	int roll_no;
	void getdata()
	{
		cout<<"enter the name :";
		cin>>name;
		cout<<"enter the roll number :";
		cin>>roll_no;
		cout<<"enter the division :";
		cin>>div;
		cout<<"enter the standerd :";
		cin>>std;
		cout<<"enter the address :";
		cin>>add;
	}
	public:

	void displaydata()
	{
		getdata();
		cout<<"THE ENTERED INFORMATION OF STUDENT IS : "<<endl;
		cout<<"the name is : "<<name<<endl;
		cout<<"the roll no is : "<<roll_no<<endl;
		cout<<"the division is : "<<div<<endl;
		cout<<"the standerd is : "<<std<<endl;
		cout<<"Address is : "<<add<<endl;
	}
};

void main()
{
    clrscr();
	student s1;
	s1.displaydata();
	getch();
}