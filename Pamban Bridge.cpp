#include <iostream>
using namespace std;

class tollbooth
{
  int n;
  double s;
  public:
  void payingcar(double x){
    n++;
    s+=x;
  }
  void nonpayingcar(){
    n++;
  }
  void display(){
    cout<<"Total number of cars passed = "<<n<<endl;
    cout<<"Total amount collected = "<<s;
  }
  tollbooth() {
    s=0;n=0;
  }
};

int main() {
  tollbooth obj;
  int x;
  double y;
  char dump[10];
  cin>>x;
  for(int i=0;i<x;i++){
    cin>>dump>>y;
    if(y!=0) obj.payingcar(y);
    else obj.nonpayingcar();
  }
  obj.display();
  return 0;
}
