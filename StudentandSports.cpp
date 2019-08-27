// Student and Sports

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
    int mark;
    void getsm()
    {
        cin >> mark;
    }
};
class statement : public student, public sports
{
public:
    int total, average;
    void display()
    {
        total = mark1 + mark2 + mark;
        average = total / 3;
        cout << rollno << endl
             << total << endl
             << average;
    }
};
int main()
{
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}