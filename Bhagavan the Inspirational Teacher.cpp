#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int roll;
    string name;
    float height, weight;

    student()
    {
        name = "Bhagavan";
        roll = 1593;
        height = 172.5;
        weight = 60.4;
    }

    void readinput()
    {
        cin >> name >> roll >> height >> weight;
    }
    void displaydata()
    {
        cout << name << " " << roll << " " << height << " " << weight << endl;
    }
};

int main()
{
    student s1, s2;
    s1.readinput();
    s1.displaydata();
    s2.displaydata();

    return 0;
}