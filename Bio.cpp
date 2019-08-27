//Bio

#include <iostream>
using namespace std;
class student
{
public:
    int rollno, mark1, mark2;
    void get()
    {
        cin >> rollno >> mark1 >> mark2;
    }
};
class sports
{
public:
    int mark3;
    void getdata()
    {
        cin >> mark3;
    }
};
class statement : public student, public sports
{
public:
    int total, average;
    void display()
    {
        total = mark1 + mark2 + mark3;
        average = total / 3;
        cout << "Roll No:" << rollno << endl
             << "Total:" << total << endl
             << "Average:" << average << endl;
    }
};
int main()
{
    statement s;
    s.get();
    s.getdata();
    s.display();
    return 0;
}