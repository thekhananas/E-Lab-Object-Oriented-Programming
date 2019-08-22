#include <iostream>
using namespace std;
class student {
public:
  int rollno,mark1,mark2;
  public:
  void get() {
  cin>>rollno>>mark1>>mark2;
  }
};
class sports {
public:
  int sm;
  public:
  void getsm() {
  cin>>sm;
  }
};
class statement:public student,public sports {
public:
  void display() {
  cout<<rollno<<endl;
    cout<<(mark1+mark2+sm)<<endl;
    cout<<((mark1+mark2+sm)/3)<<endl;
  }
};
int main() {
	statement obj ;
  obj.get();
  obj.getsm();
  obj.display();
	return 0;
}