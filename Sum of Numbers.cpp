#include <iostream>
using namespace std;
template <class T>
T sum(T x, T y)
{
  cout << x + y << endl;
}
int main()
{
  float a, b, c, d;
  cin >> a >> b >> c >> d;
  sum(a, b);
  sum(c, d);
  sum(a, c);
  return 0;
}