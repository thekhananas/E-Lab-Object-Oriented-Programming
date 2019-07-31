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
      // method to display distance
      void displayDistance() {
         cout <<"Feet="<<feet<<" Inches="<<inches<<endl;
      }
      // overloaded minus (-) operator
      Distance operator - () {
         cout<<"Travelling Backwards\n";
         return Distance(-feet, -inches);
      }
      Distance operator + () {
         cout<<"Travelling Forward\n";
         return Distance(feet, inches);
      }

};

int main() {
   int m,n;
   cin>>m>>n;
   Distance D1(m,n);
   +D1;
    D1.displayDistance();
   -D1;                     // apply negation
   D1.displayDistance();    // display D1

   //-D2;                     // apply negation
   //D2.displayDistance();    // display D2

   return 0;
}
