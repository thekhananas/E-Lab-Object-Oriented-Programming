#include <iostream>
using namespace std;
int main()
{
  int origNum, num, rem, sum = 0;
  //cout << "Enter a positive  integer: ";
  cin >> origNum;
  num = origNum;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == origNum)
    cout <<"Give to Scientist Armstrong";
  else
    cout <<"Dont Give to Scientist Armstrong";
  return 0;
}
