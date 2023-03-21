#include<iostream>
#include "ComplexNumber.h"

template<class T>
Complex<T>::Complex() {}

template<class T>
Complex<T>::Complex(T r, T i)
{
    real = r;
    img = i;
}

template<class T>
void Complex<T>::show()
{
    std::cout << real << "+" << img << "i ";
}

template<class T>
Complex<T> Complex<T>::operator+(Complex<T>& cmp)
{
    T rl = real + cmp.real;
    T im = img + cmp.img;
    Complex<T> cm(rl,im);
    return cm;
}
