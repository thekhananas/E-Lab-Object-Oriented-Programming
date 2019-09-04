#include<iostream>
#include<cstring>
using namespace std;
class concatenate
{
private:

           char str[30];
   public:

          void read()
          {

                cin>>str;

          }
          void display()
          {
              cout<<"\n"<<str;
          }
          void operator += (concatenate str1)
          {
            strcat(str,str1.str);
            cout<<str;
          }
};
int main()
{
    concatenate a,b;
    a.read();
    b.read();
    a+=b;
    return 0;
}
