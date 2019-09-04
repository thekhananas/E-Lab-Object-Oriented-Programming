#include <iostream>
using namespace std;
class SingleInheritance{
public:
  string name,gender;
  int salary,age;

void getDetails()
  {
cin>>name>>gender>>age>>salary;
}
  };
class inheritedclass:public SingleInheritance
{public:
void display()
{
  cout<<"Name="<<name<<endl<<"Gender="<<gender<<endl<<"Age="<<age<<endl<<"Salary="<<salary;
}
};

int main() {
  inheritedclass tc;
  tc.getDetails();
  tc.display();
	return 0;
}