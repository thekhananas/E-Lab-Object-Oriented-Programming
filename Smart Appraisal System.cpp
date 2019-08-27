#include <iostream>

using namespace std;

class Appraisal
{
public:
  int sal;
  int x;

  Appraisal()
  {
    sal = 30000;
  }
  Appraisal(int val)
  {
    sal = val;
  }
  int ret()
  {
    return sal;
  }
};
int main()
{
  int z;
  cin >> z;
  Appraisal myobj;
  Appraisal myobj2(z);

  cout << "Old Salary:" << myobj.ret() << endl;
  cout << "New Salary:" << myobj2.ret();

  return 0;
}