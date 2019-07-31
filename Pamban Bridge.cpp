//last 4 and 5 test cases not working
#include <iostream>
using namespace std;
float sum = 0;
class tollbooth
{
public:
    char name[20];
    float price;

public:
    void getdata();
    void putdata()
    {
        cout << sum;
    }
};
void tollbooth ::getdata()
{
    cin >> name >> price;
    sum += price;
}
int main()
{
    int num;
    tollbooth obj[10];
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        obj[i].getdata();
    }
    cout << "Total number of cars passed = " << num << endl;
    cout << "Total amount collected = " << sum;
    return 0;
}