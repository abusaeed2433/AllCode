#include<bits/stdc++.h>

using namespace std;

class A
{
public:
    char a ='a';
    A() { cout << "A"; }
};

class B :  public A
{
public:
    char b = 'b';
    B() { cout << "B"; }
};

class C : virtual public B
{
public:
    char c = 'c';
    C() { cout << "C"; }
};

class D : virtual public B
{
public:
    char d = 'd';
    D() { cout << "D"; }
};

class E : public B
{
public:
    char e = 'e';
    E() { cout << "E"; }
};

class F : public C
{
public:
    char f = 'f';
    F() { cout << "F"; }
};

class G : virtual public D
{
public:
    char g = 'g';
    G() { cout << "G"; }
};

class H : virtual public D
{
public:
    char h = 'h';
    H() { cout << "H"; }
};
class I : virtual public E
{
public:
    char i = 'i';
    I() { cout << "I"; }
};
class J : public virtual E
{
public:
    char j = 'j';
    J() { cout << "J"; }
};
class K : public F, public G, public H
{
public:
    char k = 'k';
    K() { cout << "K"; }
};
class L : public I, public J
{
public:
    char l = 'l';
    L() { cout << "L"; }
};

int main()
{
    A *a;
    cout << "-" << endl;
//    A a;
//    cout << "\nA: " << a.a << endl;
//
//    B b;
//    cout << "\nB: " << b.a << ", " << b.b << endl;
//
//    C c;
//    cout << "\nC: " << c.a << ", " << c.b << ", " << c.c << endl;
//
//    D d;
//    cout << "\nD: " << d.a << ", " << d.b << ", " << d.d << endl;
//
//    E e;
//    cout << "\nE: " << e.a << ", " << e.b << ", " << e.e << endl;
//
//    F f;
//    cout << "\nF: " << f.a << ", " << f.b << ", " << f.c << ", " << f.f << endl;
//
//    G g;
//    cout << "\nG: " << g.a << ", " << g.b << ", " << g.d << ", " << g.g << endl;
//
//    H h;
//    cout << "\nH: " << h.a << ", " << h.b << ", " << h.d << ", "  << h.h << endl;
//
//    I i;
//    cout << "\nI: " << i.a << ", "  << i.b << ", " << i.e << ", "  << i.i << endl;
//
//
//    J j;
//    cout << "\nJ: " << j.a << ", "  << j.b << ", " << j.e << ", "  << j.j << endl;

    K k;
    cout << endl << k.a << ", " << k.b << ", " << k.c << ", " << k.d << ", " << k.f << ", " << k.g << ", " << k.h << ", " << k.k << endl;


    L l;
    // ABEI ABEJ L -> without virtual
    // ABEIJ -> with virtual
    cout << endl << l.a << ", " << l.b << ", " << l.e << ", " << l.i << ", " << l.l << ", " << l.j << endl;
    return 0;

}
