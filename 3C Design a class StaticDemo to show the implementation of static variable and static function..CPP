#include<iostream.h>
#include<conio.h>
class test
{
int code;
static int count;
	public:
	void setcode()
		{
			code=++count;
		}
	void showcode(void)
		{
			cout<<"object number="<<code<<"\n";
		}
	static void showcount(void)
		{
			cout<<"count."<<count<<"\n";
		}
};

int test::count;

void main()
{ 
	clrscr();
	test t1,t2;
	t1.setcode();
	t2.setcode();
	test::showcount();
	test t3;t3.setcode();
	test::showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	getch();
}