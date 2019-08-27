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
