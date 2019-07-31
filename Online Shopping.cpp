//test case 7 not passed
#include <iostream>
using namespace std;
class item
{
    int Item, itemcd[10], max = 0;
    float price[10], sumed = 0;

public:
    void intialize()
    {
        cin >> Item;

        for (int i = 0; i < Item; i++)
        {
            cin >> itemcd[i] >> price[i];
        }
    }

    float largest()
    {
        max = price[0];

        for (int i = 0; i < Item; i++)
        {
            if (max < price[i])
            {
                max = price[i];
            }
        }

        cout << "Largest Price=" << max << '\n';
    }

    float sum()
    {
        for (int i = 0; i < Item; i++)
        {
            sumed += price[i];
        }
        cout << "Sum of Prices=" << sumed << '\n';
        return 0;
    }

    void displayitems()
    {
        for (int i = 0; i < Item; i++)
        {
            cout << itemcd[i] << " and " << price[i] << '\n';
        }
    }
};
int main()
{
    item i;
    i.intialize();
    i.largest();
    i.sum();
    cout << "Code and Price" << '\n';
    i.displayitems();
    return 0;
}