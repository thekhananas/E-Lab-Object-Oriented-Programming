<<<<<<< HEAD
//Bio

#include <iostream>
using namespace std;
class student
{
public:
    int rollno, mark1, mark2;
    void get()
    {
        cin >> rollno >> mark1 >> mark2;
    }
};
class sports
{
public:
    int mark3;
    void getdata()
    {
        cin >> mark3;
    }
};
class statement : public student, public sports
{
public:
    int total, average;
    void display()
    {
        total = mark1 + mark2 + mark3;
        average = total / 3;
        cout << "Roll No:" << rollno << endl
             << "Total:" << total << endl
             << "Average:" << average << endl;
    }
};
int main()
{
    statement s;
    s.get();
    s.getdata();
    s.display();
    return 0;
=======
#include <iostream>
using namespace std;
class student{
public:
  int rollnumber,mark1,mark2;
   void getdet1(){
  cin>>rollnumber;
    cin>>mark1>>mark2;
  }
};
class sports{

  public:
  int mark3;
  void getdet2(){
cin>>mark3;
}
};
class statement:public student,public sports{
public:
  void display(){
  cout<<"Roll No:"<<rollnumber<<endl;
  cout<<"Total:"<<(mark1+mark2+mark3)<<endl;
  cout<<"Average:"<<((mark1+mark2+mark3)/3)<<endl;
}
};
int main() {
	statement obj;
  obj.getdet1();
  obj.getdet2();
  obj.display();
	return 0;
>>>>>>> 6c587fe6e2dc042f6a0482e1b1be974a11f09bbc
}