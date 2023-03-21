#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int info;
    node *link;
};

node *Head,*tmp;

void creation(int x){
    node *ptr;
    ptr = new node();
    ptr ->info = x;
    ptr ->link = NULL;

    if(Head == NULL){
        Head = ptr;
    }
    else{
        tmp ->link = ptr;
    }
    tmp = ptr;
}

void traverse(node *head, int d){
    cout << "Traversing list "<< d <<" :" << endl;
    node *srt;
    for(srt = head; srt != NULL; srt = srt ->link){
        cout << srt->info << "\t";
    }
    cout << endl;
}

node *Tail,*temp,*current;

void reverse_list(){
    node *tmp,*srt,*prev;
    tmp = Head;
    srt = Head ->link;
    tmp->link = NULL;
    while(srt != NULL){
        prev = srt;
        srt = srt->link;
        prev->link = tmp;
        tmp = prev;
    }
    Head = tmp;
}

int main()
{
    for(int i=1;i<10;i+=2){
        creation(i);
    }
    traverse(Head,1);

    reverse_list();
    traverse(Head,2);

    return 0;
}
