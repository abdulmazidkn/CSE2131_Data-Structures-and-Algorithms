This program shows that C++ provides a default copy constructor if one is not explicitly defined by the user
.
#include <iostream>
#include <string.h>
using namespace std;
class Code{
int id;
public:
    Code(int a)
    {
        id = a;
    }
    void display()
    {
        cout << id << " ";
    }
};
int main()
{
Code A(100);
Code B = A;
A.display();
B.display();
return 0;
}
