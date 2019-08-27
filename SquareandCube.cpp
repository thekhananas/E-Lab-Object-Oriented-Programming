//Square and cube

#include <iostream>
#include <math.h>
using namespace std;
class Number
{
public:
    int number1, sq, cube;
    void getNumber()
    {
        cin >> number1;
    }
};
class Square : public Number
{
public:
    int getSquare()
    {
        sq = number1 * number1;
        cout << sq << endl;
    }
};

class Cube : public Number
{
public:
    void getCube()
    {
        cube = number1 * number1 * number1;
        cout << cube << endl;
    }
};

int main()
{
    Square objS;
    Cube objC;
    objS.getNumber();
    objC.getNumber();
    objS.getSquare();
    objC.getCube();
    return 0;
}