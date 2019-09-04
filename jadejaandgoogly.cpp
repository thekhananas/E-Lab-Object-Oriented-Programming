#include <iostream>
using namespace std;
class googly
{
  int no;
  public:
  void getballnumber()
  {
    cin>>no;
  }
  friend int isgoogly(googly a);
};
int isgoogly(googly a)
{
 if(a.no%2==0)
   cout<<"Not a Googly Ball";
  else
    cout<<"Googly Ball";
  return 0;
}

int main()
{
 googly e1;
  e1.getballnumber();
  isgoogly(e1);
 return 0;
}