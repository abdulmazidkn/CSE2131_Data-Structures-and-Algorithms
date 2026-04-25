This example uses an item class where one member function is defined inside the class and another is defined outside using the scope resolution operator.
#include <iostream.h>
class item
{
    int number; //variables declaration
    float cost; //private by default

    public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<< "Number :" << number << "\n";
        cout<< "Cost :" << cost << "\n";
    }
};

void item :: getdata(int a, float b)
{
    number=a;
    cost=b;
}

void main()
{
    item x; //create object x
    cout << "\nobject x " << "\n";
    x.getdata(100, 299.95);
    x.putdata();

    item y; //create another object
    y.getdata(200, 175.50);
    y.putdata();
}
