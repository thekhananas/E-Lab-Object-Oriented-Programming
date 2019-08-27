#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int dino;

public:
    void input()
    {
        cin >> num;
        cin >> dino;
    }

    Fraction operator+(Fraction n2)
    {
        Fraction temp;
        temp.num = (num * n2.dino) + (dino * n2.num);
        temp.dino = dino * n2.dino;

        return temp;
    }

    void display()
    {
        cout << num << "/" << dino;
    }
};
int main()
{
    Fraction obj;
    Fraction obj2;
    Fraction obj3;

    obj.input();
    obj2.input();

    obj3 = obj + obj2;

    obj3.display();

    return 0;
}