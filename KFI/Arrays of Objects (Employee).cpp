This program demonstrates how to create an array of class objects to store data for multiple managers.
#include <iostream>
using namespace std;

class Employee{
    char name[2];
    float age;
    public:
    void getData(void);
    void putData(void);
};

void Employee :: getData(void)
{
    cout << "Enter name:" ;
    cin >> name;
    cout << "Enter age:" ;
    cin >> age;
}

void Employee :: putData(void)
{
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
}

const int size = 3;
int main()
{
    Employee manager[size];
    for(int i=0; i < size ; i++)
    {
        cout << "\nDetails of manager:" << i+1 << "\n";
        manager[i].getData();
    }
    cout << "\n";
    for(int i=0; i < size ; i++)
    {
        cout << "\nmanager:" << i+1 << "\n";
        manager[i].putData();
    }
    return 0;
}
