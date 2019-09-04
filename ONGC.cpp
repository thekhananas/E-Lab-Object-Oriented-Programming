#include <iostream>
using namespace std;
class Employee  
{
virtual int getSalary()=0;   
};

class Developer : public Employee
{
 int salary;
 public:
  Developer(int s)
  {
   salary = s;
  }
  int getSalary()
  {
   return salary;
  }
};

class Driver : public Employee
{
 int salary;
 public:
  Driver(int t)
  {
   salary = t;
  }
  int getSalary()
  {
   return salary;
  }
};

int main()
{
  int d1n,d2n;
  cin>>d1n;
  cin>>d2n;
 Developer d1(d1n);
 Driver d2(d2n);
 int a, b;
 a = d1.getSalary();
 b = d2.getSalary();
 cout << "Salary of Developer : " << a << endl;
 cout << "Salary of Driver : " << b << endl;
 return 0;
}