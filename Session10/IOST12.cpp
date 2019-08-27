#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int a, i;
  cin >> a;
  float pi = (float)22 / 7;
  for (i = 0; i < a; i++)
  {
    cout.precision(a - i);
    cout << pi << endl;
  }
  cout << "\n previous Setting:1";
  return 0;
}