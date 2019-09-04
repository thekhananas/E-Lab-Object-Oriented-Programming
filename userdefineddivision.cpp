#include <iostream>
#include <exception>
using namespace std;

class Divide_By_Zero_Exception : public exception{
  public:
  const char * what() const throw() {
    return "Divide By Zero Exception"; }
};
int main()
{
  int x,y;
  cin>>x>>y;
  Divide_By_Zero_Exception d;
  try{
    if(y==0)
      throw d;
    cout<<x/y;
  }catch(exception& e){
    cout<<e.what();
  }
 return 0;
}