#include <iostream>
using namespace std;

class Salary{
  int salary;
  public:
  int Increment(int currsal){
    salary = currsal;
    cout<<salary<<endl;
  }
  int Increment(int currsal,int bonus){
    salary = currsal+bonus;
    cout<<salary;
  }
};

int main() {
  Salary ob;
  int x,y;
  cin>>x>>y;
  ob.Increment(x);
  ob.Increment(x,y);
}
