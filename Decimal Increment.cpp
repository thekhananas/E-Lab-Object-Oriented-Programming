#include <iostream>
using namespace std;

class Decimal{
  public:
  
  float x;
  void operator ++()
  {
    x = x+0.1;
  }
};

int main() {
  Decimal obj;
  cin>>obj.x;
  ++obj;
  cout<<obj.x;
  return 0;
}
