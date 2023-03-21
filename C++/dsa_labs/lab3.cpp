#include<bits/stdc++.h>

using namespace std;


//linear and binary search on linked list


class Node{
public:
    int info;
    Node *link;
};

Node *Head = NULL, *tmp;

void push(int item){
    Node *ptr = new Node();
    ptr->info = item;
    ptr->link = NULL;
    if(Head == NULL){
        Head = ptr;
    }
    else{
        tmp->link = ptr;
    }
    tmp = ptr;
}

void traverse(){
    for(Node *srt = Head; srt!=NULL; srt = srt->link){
        cout << srt->info << "\t";
    }
    cout << endl;
}

void linearSearch(int item){
    Node *srt = NULL;
    for(srt = Head; srt!=NULL; srt = srt->link){
        if(srt->info == item){
            cout << "Item found" << endl;
            break;
        }
    }

    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}

Node* middle(Node *start, Node *last){
    Node *slow, *fast;
    slow = start;
    fast = start->link;
    while(fast!=last){
        fast = fast->link;
        if(fast != last){
            slow = slow->link;
            fast = fast->link;
        }
    }
    cout << "middle: " << slow ->info << endl;
    return slow;
}

Node* binSearch(int item){
    Node *srt, *last, *mid;
    srt = Head; last = NULL;
    do{
        mid = middle(srt,last);
        if(mid==NULL){
            return NULL;
        }
        if(mid->info == item){
            return mid;
        }
        if(mid->info < item){
            srt = mid->link;
        }
        else{
            last = mid;
        }
    }
    while(srt!=last);
}

int main(){

    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter items: ";
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        push(tmp);
    }
    traverse();

    int choice;
    while(true){
        int s_item;
        cout << "Enter search item: ";
        cin >> s_item;
        linearSearch(s_item);
        Node *ptr = binSearch(s_item);
        if(ptr!=NULL){
            cout << "Item found" << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }

    return 0 ;
}
