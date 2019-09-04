#include <iostream>
using namespace std;
class student
{
  public:
  int rollno,mark1,mark2;
  void get()
  {
    cin>>rollno>>mark1>>mark2;
  }
};
class sports
{
  public:
  int mark;
  void getsm()
  {
   cin>>mark;
  }
};
class statement:public student,public sports
{
   public:
   void display()
   {
   cout<<rollno<<endl<<mark1+mark2+mark<<endl<<(mark1+mark2+mark)/3;
   }
};
int main() 
{
  statement obj;
  obj.get();
  obj.getsm();
  obj.display();
  
	
	return 0;
}