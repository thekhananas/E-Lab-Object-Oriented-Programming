#include <iostream>
#include <string.h>
using namespace std;

class Electric
{
  int no,units;
  float price;
  char name[25];
  public:
  void accept(int x,string n, float p);
  void print_bill();
  void print_bill(int n);
};

int main() {
  int n,units;
  float price;
  char name[25];
  cin>>n;
  Electric test;
  cout<<"Number of Consumers:"<<n<<endl;
  for(int i=0;i<n;i++){
    cin>>name;
    cout<<"Consumer Name:"<<name<<endl;
    cin>>units;
    cout<<"Consumed:"<<units<<endl;
    test.print_bill(units);
  }
  return 0;
}

void Electric::print_bill(int n){
  if(n<=100) { price = n*0.4;}
  else if(n<=300) { price = 40 + ((n-100)*0.5);}
  else { price = 40 + 100 + ((n-300)*0.6);}
  if(price>250) {price =  price + (price/0.15);}
  price+=500;
  cout<<"Bill to pay:"<<price<<endl;
}
