This snippet demonstrates how returning *this from member functions allows for multiple function calls to be chained (cascaded) in a single statement
.
#include<iostream>
using namespace std;

class this_pointer{

public:
    this_pointer add(int a)
    {
        this->a=a+a;
        cout<<this->a<<" ";
        return *this;
    }

    this_pointer sub(int a)
    {
        this->a=a-a;
        cout<<this->a<<" ";
        return *this;
    }
private:
int a;
};

int main()
{
    this_pointer A;
    A.add(5).sub(10);
    return 0;
}
