#include <iostream>
#include <string>  // For using std::string

using namespace std;

class Student
{
    string name, div, std, add;
    int roll_no;

    void getdata()
    {
        cout << "Enter the name: ";
        getline(cin, name);  // To capture the entire line including spaces

        cout << "Enter the roll number: ";
        cin >> roll_no;

        cout << "Enter the division: ";
        cin >> div;

        cout << "Enter the standard: ";
        cin >> std;

        cin.ignore();  // To ignore the newline character left by cin
        
        cout << "Enter the address: ";
        getline(cin, add);  // To capture the entire line including spaces
    }

public:
    void displaydata()
    {
        getdata();
        cout << "\nThe entered information of the student is:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Division: " << div << endl;
        cout << "Standard: " << std << endl;
        cout << "Address: " << add << endl;
    }
};

int main()
{
    Student s1;
    s1.displaydata();
    return 0;
}
