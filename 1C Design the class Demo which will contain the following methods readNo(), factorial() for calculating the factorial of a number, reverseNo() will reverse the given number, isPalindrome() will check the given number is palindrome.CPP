#include<iostream.h>
#include<conio.h>

class abc
{
	int a1,a2,a3,a4;
	void readno_fact()
	{
		cout<<"enter the number to find the factorial:";
		cin>>a1;

	}
	void readno_rev()
	{
		cout<<"\nenter the number to find the reverse number:";
		cin>>a2;

	}
	void readno_pal()
	{
		cout<<"\nenter the number to find the palindrome number :";
		cin>>a3;

	}
	void readno_ams()
	{
		cout<<"\nenter the number to find the amstrong number :";
		cin>>a4;

	}

	public:
	void factorial();
	int reverseno();
	void palindrome();
	void amstrong();
};

void abc::factorial()
{       readno_fact();
	double x,fact=1;
	x=a1;
	for(int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	cout<<"\nthe factorial of number is :"<<fact<<endl;
}

int abc::reverseno()
{        readno_rev();
	int y,rem,temp=0;
	y=a2;
	while(y!=0)
	{
		rem=y%10;
		temp=10*temp+rem;
		y=y/10;
	}
	return temp;
}

void abc::palindrome()
{	readno_pal();
	int pp,temp2=0,rem2=0;
	pp=a3;
	while(pp!=0)
	{
		rem2=pp%10;
		temp2=10*temp2+rem2;
		pp=pp/10;
	}

	if(temp2==a3)
	{
		cout<<"\nthe number is palindrome\n";
	}
	else
	{
		cout<<"\nthe number is not palindrome\n";
	}
}

void abc::amstrong()
{       readno_ams();
	int z,sum=0,r;
	z=a4;
	while(z!=0)
	{
		r=z%10;
		sum=sum+r*r*r;
		z=z/10;
	}

	if(sum==a4)
		cout<<"\nthe number is amstrong";
	else
		cout<<"\nthe number is not amstrong";
}

void main()
{
	clrscr();
	abc anynum;
	anynum.factorial();
	int r=0;
        r=anynum.reverseno();
        cout<<"\nreverse of the number is :"<<r<<endl;
	anynum.palindrome();
	anynum.amstrong();
	getch();

}