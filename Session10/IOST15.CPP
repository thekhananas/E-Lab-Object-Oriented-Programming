#include <iostream>
using namespace std;

int main()
{
  ios::adjustfield;

  int x;
  cin >> x;
  for (int i = 0; i < x - 3; i++)
  {
    cout << "*";
  }
  cout.setf(std::ios::right);
  cout << right << "SRM" << '\n';
  cout.setf(std::ios::left);
  cout << left << "SRM";
  for (int i = 0; i < x - 3; i++)
  {
    cout << "*";
  }
  return 0;
}
