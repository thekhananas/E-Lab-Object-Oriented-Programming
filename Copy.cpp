#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
private:

           char str[30];
   public:

          void getdata()
          {

                cin>>str;

          }
          void display()
          {
              cout<<"\n"<<str;
          }
          void operator == (mystring str1)
          {
            strcpy(str1.str,str);
            cout<<"Copied String is:"<<str1.str;
          }
};
int main()
{
    mystring a,b;
    a.getdata();
    //b.getdata();
    a==b;
    return 0;
}
