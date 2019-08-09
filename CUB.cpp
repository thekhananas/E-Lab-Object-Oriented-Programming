//Test Case 8 not working
//Author Pulkit Singh

#include <iostream>
using namespace std;

class AccBalance
{
    float balance;

public:
    AccBalance()
    {
        balance = 0;
        cout << "Zero Balance" << endl;
    }
    AccBalance(float x)
    {
        if (x > 0)
            cout << "Positive";
        else if (x < 0)
            cout << "Negative";
        else
            cout << "Zero";
    }
};

int main()
{
    AccBalance defltBal;
    float bal;
    cin >> bal;
    AccBalance currBal(bal);
    return 0;
}