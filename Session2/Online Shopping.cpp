#include <iostream>
using namespace std;

class item
{
    int no, itemcd[10], max = 0;
    float price[10], sumed = 0;

public:
    void initialize();
    void initialize(int n)
    {     
      no = n;
        for (int i = 0; i < no; i++)
        {
            cin >> itemcd[i] >> price[i];
        }
    }

    float largest()
    {
        max = price[0];

        for (int i = 0; i < no; i++)
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
        for (int i = 0; i < no; i++)
        {
            sumed += price[i];
        }
        cout << "Sum of Prices=" << sumed << '\n';
        return 0;
    }

    void displayitems()
    {
        for (int i = 0; i < no; i++)
        {
            cout << itemcd[i] << " and " << price[i] << '\n';
        }
    }
};

int main()
{
    item i;
    int n;
    cin >> n;
    i.initialize(n);
    i.largest();
    i.sum();
    cout << "Code and Price" << '\n';
    i.displayitems();
    return 0;
}
