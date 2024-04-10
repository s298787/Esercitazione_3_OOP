#pragma once

#include <iostream>

using namespace std;

struct ComplexNumber //definisce la classe dei numeri complessi
{
    double real;
    double im;

    ComplexNumber() = default; //inizializza il costruttore di default

    ComplexNumber(double a, double b) //inizializza un costruttore per i double
    {
        real = a;
        im = b;
    }
};

inline ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2); //dichiara l'operazione di somma tra complessi, specificata in ComplexNumber.cpp
inline bool operator==(const ComplexNumber& c1, const ComplexNumber& c2); //dichiara l'opratore booleano di uguaglianza
inline ostream& operator<<(ostream& os, const ComplexNumber& c); //dichiara l'operatore di output sul compiler
inline ComplexNumber conjugate(const ComplexNumber& c); //dichiara la funzione che calcola il coniugato
