#include <iostream>
#include <cmath>
using namespace std;
class Salary
{
private:
  int deftsalary;

public:
  Salary()
  {
    deftsalary = 10000;
    cout << deftsalary << endl;
  }
  Salary(int str)
  {
    deftsalary = str;
    cout << deftsalary << endl;
  }
};

int main()
{
  Salary myobj;

  float a;
  cin >> a;
  Salary myobj2(a);
  return 0;
}