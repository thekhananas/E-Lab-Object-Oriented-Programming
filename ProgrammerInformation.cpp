#include <iostream>
using namespace std;
class person{
public:
  char n[10];
  int a;
  char g[10];
  void getdata(){
cin>>n>>a>>g;
}
  void display(){
  cout<<"Name: "<<n<<endl;
    cout<<"Age: "<<a<<endl;
    cout<<"Gender: "<<g<<endl;
  }
  };
class employee: public person{
public:
  char nc[10];
  int s;
  void getdata1(){
cin>>nc>>s;
}
  void display1(){
  cout<<"Name of Company: "<<nc<<endl;
    cout<<"Salary: "<<"Rs."<<s<<endl;
  }
  
};
class programmer: public employee{
public:
  int np;
  void getdata2(){
cin>>np;
}
  void display2(){
  cout<<"Number of programming language known: "<<np<<endl;
    
  }
};

int main() {
	programmer p;
  p.getdata();
  p.display();
   p.getdata1();
  p.display1();
   p.getdata2();
  p.display2();
	return 0;
}