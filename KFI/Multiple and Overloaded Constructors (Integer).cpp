This program demonstrates default, parameterized, and copy constructors within a single class.
#include <iostream>
using namespace std;

class Integer
{
    int m,n ;
    public:
    Integer() {m=0; n=0;} // Default

    Integer(int x, int y) // Parameterized
    {
        m = x;
        n = y;
    }

    Integer(Integer &i) // Copy
    {
        m = i.m;
        n = i.n;
    }

    void display(void)
    {
        cout << " m = " << m << ",";
        cout << " n = " << n << "\n";
    }
};

int main()
{
    Integer I1;
    Integer I2(20, 40);
    Integer I3(I2);

    I1.display();
    I2.display();
    I3.display();
    return 0;
}
