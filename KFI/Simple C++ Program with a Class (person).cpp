This program demonstrates basic class definition, member functions, and object instantiation.
#include<iostream.h>
class person
{
    char name[2];
    int age;

    public:
    void getdata(void);
    void putdata(void);
};

void person :: getdata(void)
{
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
}

void person :: putdata(void)
{
    cout << "\nName: " << name;
    cout << "\nage: " << age;
}

void main()
{
    person p;
    p.getdata();
    p.putdata();
}
