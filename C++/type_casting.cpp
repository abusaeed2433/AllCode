#include<iostream>

using namespace std;

class Invent2;

class Invent1{
    int code;
    int items;
    float price;
public:
    Invent1(int a,int b,int c){
        code = a;
        items = b;
        price = c;
    }

    void putData(){
        cout << "Code: "<< code << endl;
        cout << "Items: "<< items << endl;
        cout << "Price: "<< price << endl;
    }

    int getCode(){ return code; }
    int getItems(){ return items; }
    float getPrice(){ return price; }
    operator float(){ return items * price; }

};

class Invent2{
    int code;
    float value;
public:
    Invent2(){
        cout << " --- Default called ---" << endl;
        code = 0;
        value = 0;
    }
    Invent2(int x, float y){
        code = x;
        value = y;
    }
    void putData(){
        cout << "Code: " << code << endl;
        cout << "Value: " << value << endl;
    }
    Invent2(Invent1 p){
        cout << " --- Called ---" << endl;
        code = p.getCode();
        value = p.getItems() * p.getPrice();
    }

    ~Invent2(){
        cout << " --- Destructor called --- " << endl;
    }
};

class ABC{
    int value;
public:
    ABC(){
        cout << "--- Default called --- "<< endl;
    }
    ABC(ABC &abc){
        cout << "--- Copy called ---" << endl;
    }
    operator =(int value){
        cout << " --- Hudai --- "<< endl;
    }
    ABC(int v){
        cout << "--- Constructor called --- "<< endl;
        value = v;
    }
    void display(){
        cout << "Value: " <<  value << endl;
    }

    ~ABC(){
        cout << " --- Destructor called --- "<< endl;
    }

};


int main(){

    ABC abc;
    abc = 100;// abc = ABC(100);
    abc.display();

    Invent1 s1(100,5,140.0);
    Invent2 d1;

    float total_value;

    total_value = s1;

    d1 = s1;

    cout << "Product details - Invent1 type" << endl;
    s1.putData();

    cout << endl << "Stock value" << endl;
    cout << "Value = " << total_value << endl << endl;

    cout << "Product details - Invent2 type" << endl;
    d1.putData();

    return 0;
}
