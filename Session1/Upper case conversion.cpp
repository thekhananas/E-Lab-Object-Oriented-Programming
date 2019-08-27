#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char a[26];
    cin >> a;
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        a[i] = toupper(a[i]);
        cout << a[i];
    }

    return 0;
}