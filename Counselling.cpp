#include <iostream>
using namespace std;

class Student
{
public:
    char name1[100];
    char name2[100];
    float marks;

    void getDetails()
    {
        cin >> name1 >> name2 >> marks;
    }
    void displayDetails()
    {
        cout << name1 << endl
             << name2 << endl
             << marks << endl;
    }
};

class StudentDetails : public Student
{
};

int main()
{
    StudentDetails sd;
    sd.getDetails();
    sd.displayDetails();
    return 0;
}