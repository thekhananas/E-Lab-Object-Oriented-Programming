#include <iostream>
using namespace std;

class A
{
public:
    int n;

    void display()
    {
        cin >> n;
    }
};

class B
{
public:
    int c;

    void display()
    {
        cin >> c;
    }
};

class C:public A,public B
{
public:
    void display()
    {
        A::display();
        B::display();
        cout << n * c;
    }
};

int main()
{
    C sample;

    sample.display();
    return 0;
}
