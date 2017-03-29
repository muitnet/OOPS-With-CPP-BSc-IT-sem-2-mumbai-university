#include<iostream.h>
#include<conio.h>
 
class student
{
    protected:
       int rno,m1,m2;
    public:
		void get()
	      {
			    cout<<"\n\tEnter the Roll no :";
			    cin>>rno;
			    cout<<"\tEnter the two subjects marks   :";
			    cin>>m1;cout<<"\t\t\t\t\t";cin>>m2;
	      }
};
class sports
{
    protected:
       int sm;               
    public:
		void getsm()
	      {
		 cout<<"\n\tEnter the sports mark :";
                 cin>>sm;
 
              }
};
class statement:public student,public sports
{
    int tot,avg;
    public:
    void display()
              {
                 tot=(m1+m2+sm);
                 avg=tot/3;
				 cout<<"\n\n\tRoll No : "<<rno;
				 cout<<"\n\tTotal : "<<tot;
                 cout<<"\n\tAverage : "<<avg;
              }
};
void main()
{
   clrscr();
   statement obj;
   obj.get();
   obj.getsm();
   obj.display();
   getch();
}