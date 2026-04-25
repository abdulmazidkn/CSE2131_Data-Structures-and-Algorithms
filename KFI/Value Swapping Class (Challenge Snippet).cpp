A class designed to swap two values internally using arithmetic operations.
#include <iostream>
using namespace std;

class Swap{
    int a,b;
    public:
    void Swap(int m, int n)
    {
        a=m; b=n;
    }
    void swapValue()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display() { cout << a << " " << b; }
};

int main()
{
    int m,n;
    cin >>m >> n;
    Swap A(m,n);
    A.swapValue();
    A.display();
    return 0;
}
