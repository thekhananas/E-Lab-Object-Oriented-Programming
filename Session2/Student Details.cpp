#include <iostream>
#include <string.h>

using namespace std;

class student
{
    int roll;
    char name[30];
    float height, weight;

public:
    student()
    {
        strcpy(name, "Nikhil");
        roll = 20;
        height = 165.5;
        weight = 58.2;
    }
    void read()
    {
        cin >> name >> roll >> height >> weight;
    }
    void display()
    {
        cout << name << " " << roll << " " << height << " " << weight << endl;
    }
};

int main()
{
    student s1, s2;
    s1.read();
    s1.display();
    s2.display();
    return 0;
}