A focused example showing how the copy constructor is used to initialize one object from another.
#include <iostream>
using namespace std;
class Code{
    int id;
    public:
    Code() {}
    Code(int a) {id = a;}
    Code(Code &x) { id = x.id; }
    void display(void) { cout << id; }
};

int main()
{
    Code A(100);
    Code B(A);
    Code C = A;
    Code D; D = A; // Assignment, not copy constructor

    A.display(); B.display(); C.display(); D.display();
    return 0;
}
