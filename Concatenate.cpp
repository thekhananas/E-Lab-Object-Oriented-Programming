#include <iostream>
using namespace std;
class concatenate
{
public:
  string a, b;
  void read()
  {
    cin >> a >> b;
  }
  void operator+()
  {
    cout << a << b;
  }
};
int main()
{
  concatenate obj;
  obj.read();
  +obj;
  return 0;
}