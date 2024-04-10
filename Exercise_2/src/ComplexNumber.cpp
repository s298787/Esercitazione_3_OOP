#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) //definisce l'operazione di somma tra complessi˚
{
    ComplexNumber c(c1.real + c2.real, c1.im + c2.im);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2) //definisce l'opratore booleano di uguaglianza
{
    bool b;
    if (abs(c1.real-c2.real) < 5e-16 && abs(c1.im - c2.im) < 5e-16) //verifica se la parte reale e la parte immaginaria sono uguali con una tolleranza dell'ordine di 10^-6
    {
        b = true;
    }
    else
    {
        b = false;
    }
    return b;
}

ostream& operator<<(ostream& os, const ComplexNumber& c) //definisce l'operatore di output sul compiler
{
    if (c.real != 0)
    {
        if (c.im < 0)
        {
            if (c.im == -1) {os << c.real << "i";}
            else {os << c.real << c.im << "i";}
        }
        else if (c.im > 0)
        {
            if (c.im == 1)
            {
                os << c.real << "+" << "i";
            }
            else
            {
                os << c.real << "+" << c.im << "i";
            }
        }
        else if (c.im == 0)
        {
            os << c.real;
        }
    }
    else if (c.real == 0)
    {
        if (c.im == 0)
        {
            os << c.real;
        }
        else
        {
            if (c.im == 1) {os << "i";}
            else if (c.im == -1) {os << "-i";}
            else{os << c.im << "i";}
        }
    }
    return os;
}

ComplexNumber conjugate(const ComplexNumber& c) //definisce la funzione che calcola il coniugato
{
    ComplexNumber con(c.real, -c.im);
    return con;
}
