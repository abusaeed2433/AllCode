#include<bits/stdc++.h>

using namespace std;

class Int;

class Complex
{
    static int cnt;
    int real;
    int img;
public:
    friend Complex sum(Complex&, Int);
    Complex(int r, int im) { real = r; img = im; cnt++; }

    Complex() { cnt++; }

    ~Complex() { cnt--; }

    void display()
    {
        cout << "Number of objects: " << cnt << endl;
        cout << real << " + " << img << "i" << endl;
    }
};

int Complex :: cnt = 0;

class Int
{
    int val;
    friend Complex sum(Complex&, Int);
public:
    Int(int v) { val = v; }
};

Complex sum(Complex& c1, Int i1)
{
    int real = c1.real + i1.val;
    int img = c1.img + i1.val;

    Complex cmp(real,img);
    return cmp;
}

int main()
{
    Complex c1(3,4),c2;
    Int i1 = 2;
    { Complex c3; }

    c2 = sum(c1,i1);
    c2.display();
}
