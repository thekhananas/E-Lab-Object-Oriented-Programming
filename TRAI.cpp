#include <iostream>
using namespace std;
class Phone
{
public:
    int std, ec, phn;

public:
    void change()
    {
        cin >> std >> ec >> phn;
        cout << "91" << std << ec << phn;
    }
};
int main()
{
    Phone obj;
    obj.change();
    return 0;
}