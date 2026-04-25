This program exchanges the private data members of two different classes using a single friend function.
#include <iostream>
using namespace std;

class Class_2;
class Class_1{
    int value1;
    public:
    void inData(int a) { value1 = a; }
    void display(void) { cout << value1 << "\n"; }
    friend void exchange(Class_1 &, Class_2 &);
};

class Class_2{
    int value2;
    public:
    void inData(int a) { value2 = a; }
    void display(void) { cout << value2 << "\n"; }
    friend void exchange(Class_1 &, Class_2 &);
};

void exchange(Class_1 &x, Class_2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    Class_1 C1;
    Class_2 C2;
    C1.inData(100);
    C2.inData(200);

    cout << "values before exchange" << endl;
    C1.display();
    C2.display();

    exchange(C1,C2);

    cout << "values after exchange" << endl;
    C1.display();
    C2.display();

    return 0;
}
