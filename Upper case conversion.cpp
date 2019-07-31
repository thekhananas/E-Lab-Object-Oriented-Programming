#include <iostream>
#include <string>

using namespace std;

int main()
{
    int length;
    char str[20];
    cin >> str;

    //ut<<""<<str;

    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    length = i;

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str;

    return 0;
}