#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str, 100);
    cout << "the number of characters extracted are:" << cin.gcount();

    return 0;
}