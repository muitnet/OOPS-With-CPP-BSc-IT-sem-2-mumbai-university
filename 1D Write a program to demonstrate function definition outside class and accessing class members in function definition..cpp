#include<iostream.h>
#include<conio.h>

class fibo
{
	public:
	void fibonacci();
};

void fibo::fibonacci()
{
	   int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "\nEnter a positive number to calculate \nthe Fibonacci series upto entered number: ";
    cin >> n;
    cout << "\nFibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

void main()
{
	clrscr();
	fibo ob;
	ob.fibonacci();
	getch();
}
