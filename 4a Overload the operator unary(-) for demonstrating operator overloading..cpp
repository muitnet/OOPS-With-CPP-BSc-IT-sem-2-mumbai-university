#include <iostream.h>
#include<conio.h>

class Distance
{
   private:
      int feet;
      int inches;
   public:

      Distance(){
	 feet = 0;
	 inches = 0;
      }
      Distance(int f, int i){
	 feet = f;
	 inches = i;
      }

      void displayDistance() {
	 cout << "F: " << feet << " I:" << inches <<endl;
      }
      // overloaded minus (-) operator
      Distance operator- () {
	 feet = -feet;
	 inches = -inches;
	 return Distance(feet, inches);
      }
};

void main()
{
    clrscr();
    Distance D1(11, 10), D2(-5, 11);
    cout<<"\n\nBefore overloading unary(-) operator : ";
    D1.displayDistance();
    cout<<"After unary(-) operator overloading : ";
    -D1;
    D1.displayDistance();
    cout<<"Before overloading unary(-) operator : ";
    D2.displayDistance();
    cout<<"After unary(-) operator overloading : ";
    -D2;
    D2.displayDistance();

   getch();
}