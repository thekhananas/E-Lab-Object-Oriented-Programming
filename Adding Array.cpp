#include<iostream>
using namespace std;
template <class T>
T sum(T arr[])
{ T s;
  for(int i=0;i<5;i++)
    s =s+arr[i];
  cout<<s<<endl;
}
int main()
{
  int arr1[5];
  float arr2[5];
  for(int i=0;i<5;i++)
    cin>>arr1[i];
  for(int i=0;i<5;i++)
    cin>>arr2[i];
  sum(arr1);
  sum(arr2);
  return 0;
}