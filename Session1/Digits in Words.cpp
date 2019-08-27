//First's approach

#include <iostream>
using namespace std;

char word[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
int display(int n)
{
    int digits[10];
    int dc = 0;
    do
    {
        digits[dc] = n % 10;
        n = n / 10;
        dc++;
    } while (n != 0);
    for (int i = dc - 1; i >= 0; i--)
        cout << word[digits[i]] << " ";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    display(n);
    return 0;
}

//Second's approach

#include <iostream>
using namespace std;

int main()
{
    int x, y = 0;
    cin >> x;
    while (x != 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }

    while (y != 0)
    {
        x = y % 10;
        y = y / 10;
        switch (x)
        {
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        case 0:
            cout << "Zero ";
            break;
        }
    }
    return 0;
}