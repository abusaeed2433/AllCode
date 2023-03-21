#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int info;
    node *link;
};

node *Head,*Head1,*Head2,*tmp1,*tmp2;

void creation(node* head, node* tmp, int x){
    node *ptr;
    ptr = new node();
    ptr ->info = x;

    if(head == NULL){
        head = ptr;
        cout << "test0" << endl;
    }
    else{
        tmp ->link = ptr;
        cout << "test" << endl;
    }
    tmp = ptr;
    cout << head << endl;
}

void traverse(node *head, int d){
    cout << "Traversing list "<< d <<" :" << endl;
    node *srt;
    for(srt = head; srt != NULL; srt = srt ->link){
        cout << srt->info << "\t";
    }
    cout << endl;
}

int main()
{

    for(int i=2;i<10;i+=2){
        cout << "Loop: " << Head1 << endl;
        creation(Head1,tmp1,i);
    }
    traverse(Head1,1);
//
//    for(int i=1;i<10;i+=2){
//        creation(Head2,tmp2,i);
//    }
//    traverse(Head2,2);

    return 0;
}

