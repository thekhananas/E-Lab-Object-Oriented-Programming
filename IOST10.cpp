#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char x[100];
    int a, b;
    cin.getline(x, 100);
    cout << "Your string is :";
    cout.write(x, strlen(x));
    cout << endl
         << endl;
    for (a = 0; a <= strlen(x); a++)
    {
        if (a == 0)
            continue;
        cout.write(x, a);
        cout << endl;
    }

    return 0;
}