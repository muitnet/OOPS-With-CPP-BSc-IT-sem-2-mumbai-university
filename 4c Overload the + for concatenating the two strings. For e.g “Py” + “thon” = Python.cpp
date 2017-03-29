#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	char str[100];
	public:
	void input();
	void output();
	string operator+(string s);
};
void string::input()
{
	cout<<"\nenter the string :\t\t";
	cin>>str;
}
string string::operator+(string s)
{
	string temp;
	strcpy(temp.str,str);
	strcat(temp.str,s.str);
	return temp;
}
void string::output()
{
	cout<<"\nthe string is:\t\t";
	cout<<"\t"<<str;
}
void main()
{
	string s1,s2,s3;
	clrscr();
	s1.input();
	s2.input();
	s3=s1+s2;
	s3.output();
	getch();
}