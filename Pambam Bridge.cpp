#include <iostream>
using namespace std;
class TollBooth
{
    int number;
    double toll;

public:
    TollBooth()
    {
        number = 0;
        toll = 0;
    }
    void payingcar(double a)
    {
        toll = toll + a;
        number++;
    }
    void nonpayingcar()
    {
        number++;
    }
    void display()
    {
        cout << "Total number of cars passed = " << number << endl;
        cout << "Total amount collected = " << toll << endl;
    }
};
int main()
{
    TollBooth obj;
    double s;
    string a;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> a;

        cin >> s;
        if (s == 0)
            obj.nonpayingcar();
        else
            obj.payingcar(s);
    }
    obj.display();
    return 0;
}