

#include <iostream>
using namespace std;


struct human
{
    string name;
    int age;
    double height = 170.0;
    bool isCool;
    char sex;
};
int DisplayStats(human x);
int main()
{
    human human1;
    human1.name = "Rusik";
    human1.age = 17;
    human1.height = 185.5;
    human1.isCool = true;
    human1.sex = 'M';

    human human2;
    human2.name = "Pablo";
    human2.age = 17;
    human2.height = 175.3;
    human2.isCool = true;
    human2.sex = 'M';

    human human3;
    human3.name = "Sasha";
    human3.age = 45;
    human3.height = 165.8;
    human3.isCool = false;
    human3.sex = 'W';

    DisplayStats(human1);
    DisplayStats(human2);
    DisplayStats(human3);
}

int DisplayStats(human x)
{
    cout << "\n**************";
    cout << "\nName: " << x.name;
    cout << "\nAge: " << x.age;
    cout << "\nHeight: " << x.height;
    cout << "\nGender: " << x.sex;
    if (x.isCool)
        cout << "\nHe is cool!!!";

    return 0;
}
