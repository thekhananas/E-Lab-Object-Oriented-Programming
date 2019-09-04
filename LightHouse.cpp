#include <iostream>
using namespace std;

class Time {
   private:
      int hours;
      int mins;
      int secs;
    public:
      // required constructors
      Time(){
         hours = 0;
         mins = 0;
         secs=0;
      }
      Time(int h, int m,int s){
         hours = h;
         mins = m;
         secs=s;
      }
      friend ostream & operator <<( ostream &output,
         const Time &T ) {
         output << T.hours<< " Hours "<< T.mins<<" Mins "<<T.secs<<" secs\n";
         return output;
      }
      friend istream & operator >>( istream  &input, Time &T ) {
         //cout<<"Enter the Time: Hours Mins and Seconds:";
         input >>T.hours >> T.mins >>T.secs;
         return input;
      }
};

int main() {
   Time T1;

//   cout << "Enter the value of object : " << endl;
   cin >> T1;
cout << T1 << endl;
   return 0;
}
