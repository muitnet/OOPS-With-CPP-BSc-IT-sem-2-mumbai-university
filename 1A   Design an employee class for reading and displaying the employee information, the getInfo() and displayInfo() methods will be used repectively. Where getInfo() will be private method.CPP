# include <iostream.h>
# include <conio.h>
class employee
{
private:
int emp_id;
char emp_name[30];
double salary;
void getinfo()
{
cout<<"Enter Name"<<endl;
cin>>emp_name;
cout<<"Enter ID"<<endl;
cin>>emp_id;
cout<<"Enter salary"<<endl;
cin>>salary;
}

public:
void displayinfo()
{
getinfo();
cout<<endl<<"THE INFORMATION ENTERED IS :"<<endl;
cout<<"Name is "<<emp_name<<endl;
cout<<"ID is "<<emp_id<<endl;
cout<<"Your salary is "<<salary<<endl;
}
};
void main()
{
clrscr();
employee e1;
e1.displayinfo();

getch();
}
