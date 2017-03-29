#include<iostream.h>
#include<conio.h>
class matrix2;
class matrix1
{
	int a[5][5];
	int m,n;
	public:
	void getmatrix1();
	void putmatrix1();
	friend void matrixsum(matrix1,matrix2);
};
void matrix1::getmatrix1()
{
	int i,j;
	cout<<"matrix1 :"<<endl<<"rows and coloums :";
	cin>>m>>n;
	cout<<"enter elements :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
}
void matrix1::putmatrix1()
{
	cout<<"matrix1 :"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<a[i][j]<<" "<<endl;
		}
	}	
}

class matrix2
{
	int b[5][5];
	int m,n;
	public:
	void getmatrix2();
	void putmatrix2();
	friend void matrixsum(matrix1,matrix2);
};
void matrix2::getmatrix2()
{
	int i,j;
	cout<<"matrix 2:"<<endl<<"rows and coloums :";
	cin>>m>>n;
	cout<<"enter elements :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	
}
void matrix2::putmatrix2()
{
	cout<<"matrix2 "<<endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		cout<<b[i][j]<<" "<<endl;
}

void matrixsum(matrix1 g,matrix2 h)
{
	int i,j;
	if(g.m==h.m&&g.n==h.n)
	{
		cout<<"sum of the matrices :";
		for(i=0;i<g.m;i++)
		{
			for(j=0;j<h.n;j++)
			{
				cout<<g.a[i][j]+h.b[i][j]<<" "<<endl;
			}
		}
	}
	else
	{
		cout<<"dimension are not same....so addition not possible";
	}
}



void main()
{
	clrscr();
	matrix1 m1;
	matrix2 m2;
	m1.getmatrix1();
	m2.getmatrix2();
	m1.putmatrix1();
	m2.putmatrix2();
	matrixsum(m1,m2);
	getch();
}