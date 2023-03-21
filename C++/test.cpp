#include<iostream>
using namespace std;

class Complex{
    int real,img;

public:
    Complex(int r, int im){
        real = r;
        img = im;
    }
    Complex(){}
    Complex operator+(int a){
        Complex cmp;
        cmp.real = real+a;
        cmp.img = img + a;
        return cmp;
    }

    Complex friend operator-(Complex &cm){
        cm.real = -cm.real;
        cm.img = -cm.img;
        return cm;
    }

    void display(){
        cout << real << " + j" << img << endl;
    }
};


int main()
{

    Complex cmp(1,2);
    cmp.display();
    cmp = -cmp;
    cmp.display();
    return 0;
}
