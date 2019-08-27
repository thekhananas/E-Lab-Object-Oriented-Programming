#include <iostream>
using namespace std;

class Decimal
{
public:
  float x;

  void operator--()
  {
    cin >> x;
    x = x * 10;
    x--;
    x = x / 10;
    cout << x;
  }
};

int main()
{
  Decimal obj;

  --obj;

  return 0;
}