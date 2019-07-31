#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choose;

    cin >> choose >> num1 >> num2;

    switch (choose)
    {
    case 1:
        cout << (num1 + num2);
        break;
    case 2:
        cout << (num1 - num2);
        break;
    case 3:
        cout << (num1 * num2);
        break;
    case 4:
        cout << (num1 / num2);
        break;
    default:
        cout << "Invalid Input";
    }
    return 0;
}