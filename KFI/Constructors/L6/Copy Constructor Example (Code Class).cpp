This program demonstrates how to define and use a copy constructor to initialize one object with the values of another
.
#include <iostream>
using namespace std;
class Code{
    int id;
    public:
    Code() {}
    Code(int a) {id = a;}
    Code(Code &x)
    {
        id = x.id;
    }
    void display(void)
    {
        cout << id;
    }
};

int main()
{
    Code A(100);
    Code B(A);
    Code C = A;

    Code D;
    D = A;

    cout <<"\n id of A: "; A.display();
    cout <<"\n id of B: "; B.display();
    cout <<"\n id of C: "; C.display();
    cout <<"\n id of D: "; D.display();

    return 0;
}
