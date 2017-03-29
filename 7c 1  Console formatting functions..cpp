//With using lomanip srtw() method.
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
char s[10];
cout<<"Enter your name:";
cin>>setw(10)>>s;
cout<<endl<<s;
getch();
}
