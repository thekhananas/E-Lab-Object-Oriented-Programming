<<<<<<< HEAD
//concatenate

#include <iostream>
#include <cstring>
using namespace std;

class concatenate
{
private:
    char str[100];

public:
    void read()
    {
        cin >> str;
    }

    void display()
    {
        cout << str;
    }

    concatenate operator+(concatenate obj2)
    {
        concatenate temp;
        strcpy(temp.str, str);
        //strcat(temp.str,str);
        strcat(temp.str, obj2.str);
        return temp;
    }
};

int main()
{
    concatenate obj;
    concatenate obj2, obj3;
    obj.read();
    obj2.read();
    obj3 = obj + obj2;
    obj3.display();
    return 0;
}
=======
#include <iostream>
using namespace std;
class concatenate
{
  public:
  string a,b;
  void read()
  {
    cin>>a>>b;
  }
 void operator+()
 {
   cout<<a<<b;
 }
};
int main() {
	concatenate obj;
  obj.read();
  + obj;
	return 0;
}
>>>>>>> 6c587fe6e2dc042f6a0482e1b1be974a11f09bbc
