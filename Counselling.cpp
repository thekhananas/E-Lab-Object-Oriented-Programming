#include <iostream>
using namespace std;

class Student {
  public:
  string name, mname;
  float num;
	void getDetails() {
    	cin>>name>>mname>>num;
    }
  
  	void displayDetails() {
    	cout<<name<<endl<<mname<<endl<<num;
    }
  	
};

class StudentDetails:public Student {
	
};
int main() {
	StudentDetails sd;
  	sd.getDetails();
  	sd.displayDetails();
	return 0;
}