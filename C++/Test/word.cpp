#include<bits/stdc++.h>

using namespace std;

class Complex{
    int real,img;
public:

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    Complex(const Complex& cmp){
        real = cmp.real;
        img = cmp.img;
    }

    void display(string s){
        cout << s << ": " << real << " + " << img << "i" << endl << endl;
    }

    void operator-(){// -a
        real *= -1;
        img *= -1;
    }
    Complex operator+(Complex& cmp){// a+b
        Complex tmp = Complex(real + cmp.real , img + cmp.img);
        return tmp;
    }

    Complex operator++(){// c = ++a or ++a
        real++;
        img++;
        Complex tmp = Complex(real,img);
        return tmp;
    }

    Complex operator++(int dummy){// c = a++ or a++
        real++;
        img++;
        Complex tmp = Complex(real-1,img-1);
        return tmp;
    }
    friend Complex operator*(Complex&, Complex&);
//    void operator++(int dummy){//can't overload
//        real++;
//        img++;
//    }

};

Complex operator*(Complex& c1, Complex& c2){// multiplication
    int real = c1.real * c2.real;
    int img = c1.img * c2.img;
    return Complex(real, img);
}

int main(){

    Complex c1(3,2),c2(2,3);
    Complex c3 = c1 + c2;
    c1.display("c1"); // 3 + 2i
    c2.display("cc"); // 2 + 3i

    c3.display("c3 = c1+c2");// 5 + 5i

    Complex c4 = ++c3;
    c4.display("c4 = ++c3");// 6 + 6i
    c3.display("c3"); // 6 + 6i

    ++c3;
    c3.display("++c3");// 7 + 7i

    Complex c5 = c3++;
    c5.display("c5 = c3++");// 7 + 7i
    c3.display("c3");// 8 + 8i

    Complex c6 = c3*c3;
    c6.display("c6 = c3*c3");// 64 + 64i

    return 0;
}
