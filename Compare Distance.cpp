#include <iostream>
using namespace std;

class Distance {
 public:
    int feet;
    int inches;
   public:

      Distance(){
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i){
         feet = f;
         inches = i;
      }
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
            // overloaded < operator
      bool operator <(const Distance& d) {
         if(feet > d.feet) {
            cout<<" First One is Greater\n";
            return false;
         }
         else if(feet == d.feet && inches > d.inches)
         {
            cout<<" First One is Greater\n";
            return false;
         }
         else if(feet == d.feet && inches == d.inches) {
            cout<<"Both are equal\n";
            return true;
         }
         else{
            cout<<"Second One is Greater\n";
            return true;
         }

      }
};

int main() {
   Distance D1, D2;
   cin>>D1.feet>>D1.inches;
   //cout<<D1.feet<<D1.inches;
   cin>>D2.feet>>D2.inches;
   //cout<<D2.feet<<D2.inches;
   bool x=D1<D2;
   return 0;
}
