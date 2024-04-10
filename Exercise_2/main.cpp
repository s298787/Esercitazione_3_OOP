#include <iostream>
#include "ComplexNumber.hpp"
#include "ComplexNumber.cpp"

using namespace std;

int main()
{
    ComplexNumber a(1,4);
    ComplexNumber b(1,-3);
    ComplexNumber c = a + b;
    ComplexNumber d(0,0);
    ComplexNumber g(0,-1);
    ComplexNumber h(1,0);
    cout << a << endl << b << endl << c << endl << d << endl << g << endl << h << endl;
    ComplexNumber k = conjugate(a);
    cout << k << endl;
    bool s = (a == b);
    if (s == 0)
    {
        cout << "a è diverso da b" << endl;
    }
    return 0;
}
