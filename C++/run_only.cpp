#include<iostream>

using namespace std;

class Abc{
    int m,n;
public:
    //Abc(Abc); //error
    Abc();//default constructor
    Abc(Abc*);
    Abc(Abc&);
    void show(){ cout << m << " - " << n << endl; }
};
Abc :: Abc(){m = 75; n = 25;}

Abc :: Abc(Abc* abc){ cout <<"a"; m = abc -> m; n = abc -> n; }
Abc :: Abc(Abc& abc){ cout <<"b"; m = abc.m; n = abc.n; }

int main(){
    Abc abc;
    Abc abc1(&abc);
    Abc abc2(abc);
    abc1.show();
    return 0;
}


