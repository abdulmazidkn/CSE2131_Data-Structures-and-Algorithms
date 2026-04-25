Similar to the above, but demonstrating different initialization styles, including explicit constructor calls.
#include <iostream>
using namespace std;

class Complex
{
    float x, y ;
    public:
    Complex() {}
    Complex(float a){x = y = a;}
    Complex(float real, float imag) {x = real; y = imag;}
    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};

Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(Complex c) { cout << c.x << " + j" << c.y << endl; }

int main()
{
    Complex A(2.7, 3.5);
    Complex B(1.6);
    Complex C = sum(A, B);

    show(A); show(B); show(C);

    Complex P = Complex(2.5, 3.9);
    Complex Q = Complex(1.6, 2.5);
    Complex R = sum(P, Q);
    show(P); show(Q); show(R);

    return 0;
}
