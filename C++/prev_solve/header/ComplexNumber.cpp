#include<iostream>
#include "ComplexNumber.h"

template<class T>
class Complex{
    T real, img;
public:
    Complex(){}
    Complex(T r, T i){ real = r; img = i; }
    void show(){ std::cout << real << "+" << img << "i "; }

    Complex operator+(Complex& cmp){
        T rl = real + cmp.real;
        T im = img + cmp.img;

        Complex cm(rl,im);
        return cm;
    }

};
