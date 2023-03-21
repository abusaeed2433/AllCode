

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

template<class T>
class Complex
{
    T real, img;

public:
    Complex();
    Complex(T, T);
    void show();
    Complex operator+(Complex& cmp);
};

#include "ComplexNumber.cpp"

#endif // COMPLEXNUMBER_H
