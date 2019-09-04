#include <iostream>
using namespace std;
class AddData{
  public:
  int x,y,z;
  void accept_details(){
   cin>>x>>y>>z;
  }
};
 class Total : public AddData 
 { public:
   int a;
   void total_of_three_subjects() 
  {
   a=x+y+z;
   
  }
};
class Percentage : public Total
{ public:
  int q;
  void calculate_percentage()
  {
    q=a/3;
    }
  void show_result()
  {
   cout<<q;
  }
};
int main() {
	class Percentage p;
  p.accept_details();
  p.total_of_three_subjects();
  p.calculate_percentage();
  p.show_result();
	return 0;
}