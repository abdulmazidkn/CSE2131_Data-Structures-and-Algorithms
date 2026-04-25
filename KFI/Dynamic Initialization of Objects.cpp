This program demonstrates initializing objects using values provided at runtime through different constructor overloads.
#include <iostream>
using namespace std;
class DynamicInitializtion{
    float sum;
    public:
    DynamicInitializtion(){}
    DynamicInitializtion(int a, int b, float c=5.4);
    DynamicInitializtion(int a, int b, int c);
    void display(void);
};

DynamicInitializtion :: DynamicInitializtion(int a, int b, float c)
{ sum = a + b + c; }

DynamicInitializtion :: DynamicInitializtion(int a, int b, int c)
{ sum = a + b + c; }

void DynamicInitializtion :: display()
{ cout<< "SUM:" << sum << endl ; }

int main()
{
    int p,q,s; float r;
    cin>>p>>q>>r;
    DynamicInitializtion A(p,q,r);
    cin>>p>>q>>s;
    DynamicInitializtion B(p,q,s);
    cin>>p>>q;
    DynamicInitializtion C(p,q);

    A.display(); B.display(); C.display();
    return 0;
}
