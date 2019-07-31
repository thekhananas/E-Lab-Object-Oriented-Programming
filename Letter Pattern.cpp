#include <iostream>
using namespace std;
int main()
{
    int size;

    cin >> size;
    char a = 'A';

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 1;
            if (a > 'Z')
            {
                a = 'A';
            }
        }
        cout << '\n';
    }
    return 0;
}