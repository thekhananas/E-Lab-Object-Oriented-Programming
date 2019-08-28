#include <iostream>
using namespace std;
class SingleInheritance
{
public:
  string name;
  string gender;
  int salary, age;
  void getDetails()
  {
    cin >> name >> gender >> age >> salary;
  }
};
class inheritedclass:public SingleInheritance
{
public:
  void display()
  {
    cout << "Name=" << name << endl;
    cout << "Gender=" << gender << endl;
    cout << "Age=" << age << endl;
    cout << "Salary=" << salary << endl;
  }
};
int main()
{
  inheritedclass tc;
  tc.getDetails();
  tc.display();

  return 0;
}