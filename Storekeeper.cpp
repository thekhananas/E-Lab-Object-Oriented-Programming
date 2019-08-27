//author aaryan
#include <iostream>
using namespace std;
class Store
{
  public:
  //int id,totalavl,consumed;
  int itemcount(int id)
  {
    return id;
  }
  void itemcount(int totalavl,int consumed,int id)
  { 
    int d;
    d=totalavl-consumed;
    d=totalavl-consumed;
    cout<<id<<endl<<d;
  }
};
int main()
{
  Store ob;
  int id,totalvl,consumed;
  cin>>id>>totalvl>>consumed;
  int k=ob.itemcount(id);
  ob.itemcount(totalvl,consumed,k);
  return 0;
}