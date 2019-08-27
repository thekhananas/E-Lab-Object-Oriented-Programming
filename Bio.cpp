#include <iostream>
using namespace std;
class student
{
public:
  int rollnumber, mark1, mark2;
  void getdet1()
  {
    cin >> rollnumber;
    cin >> mark1 >> mark2;
  }
};
class sports
{

public:
  int mark3;
  void getdet2()
  {
    cin >> mark3;
  }
};
class statement : public student, public sports
{
public:
  void display()
  {
    cout << "Roll No:" << rollnumber << endl;
    cout << "Total:" << (mark1 + mark2 + mark3) << endl;
    cout << "Average:" << ((mark1 + mark2 + mark3) / 3) << endl;
  }
};
int main()
{
  statement obj;
  obj.getdet1();
  obj.getdet2();
  obj.display();
  return 0;
}