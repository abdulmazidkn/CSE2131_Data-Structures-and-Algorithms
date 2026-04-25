A global function mean is granted access to the private members of the class Sample.
#include <iostream>
using namespace std;

class Sample{
    int a;
    int b;
    public:
    void setValue() {a=25; b=40;}
    friend float mean(Sample S);
};

float mean(Sample S)
{
    return float(S.a + S.b)/2.0;
}

int main()
{
    Sample X;
    X.setValue();
    cout << "Mean value =" << mean(X) << "\n";

    return 0;
}
