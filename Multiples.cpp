#include <iostream>
using namespace std;
class base
{
  public:
  virtual void mTable()=0; 
};
class derived:public base
{
public:int a;
void mTable(){for(int i=0;i<5;i++)cout << a*(i+1)<<" ";};
void input(){cin >> a;}
};
int main()
{
base *b;
  derived d;
  b=&d;
  d.input(); 
  b->mTable();
 return 0;
}