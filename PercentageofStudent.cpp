#include <iostream>
using namespace std;

class AddData
{
public:
    int s1, s2, s3;

    void accept_details()
    {
        cin >> s1 >> s2 >> s3;
    }
};

class Total : public AddData
{
public:
    int t;
    void total_of_three_subjects()
    {
        t = s1 + s2 + s3;
    }
};

class Percentage : public Total
{
public:
    int p;
    void calculate_percentage()
    {
        p = (t / 3);
    }

    void show_result()
    {
        cout << p;
    }
};

int main()
{
    Percentage p;
    p.accept_details();
    p.total_of_three_subjects();
    p.calculate_percentage();
    p.show_result();
    return 0;
}