#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int info;
    Node *link;
};


void creation(int x, Node*& Head, Node*& tmp){
    cout << &Head << endl;
    Node *ptr = new Node();
    ptr->info = x;
    ptr->link = NULL;
    if(Head==NULL){
        cout << "called" << endl;
        Head = ptr;
    }
    else{
        cout << "not null" << endl;
        tmp->link = ptr;
    }
    tmp = ptr;
}

void traverse(Node *Head){
    Node *srt;
    for(srt = Head; srt!=NULL; srt=srt->link){
        cout << srt->info << "\t";
    }
    cout << endl;
}

void fun(int *x){
    cout << &x <<endl;
    *x = 54;
}

void fun(Node *node){
    node->info = 24343;
}

int main(){
//    int xx;
//    xx = 5;
//    cout << &xx << endl;
//    fun(&xx);
//    cout << xx << endl;


    Node *Head = NULL, *tmp;


    cout << Head << endl;

    creation(10,Head,tmp);
    creation(15,Head,tmp);
    creation(20,Head,tmp);
    creation(25,Head,tmp);

    traverse(Head);

    return 0;
}
