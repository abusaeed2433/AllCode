#include<bits/stdc++.h>

using namespace std;

class Node;

void creation(int);
void traverse();
void firstInsert();
void lastInsert();
void lastDelete();
void deleteGiven();
void deleteAfterGiven();
void beforeDelete();
void beforeInsert();
void afterInsert();

Node* binSearch(Node *Head,int s_item);
Node* middle(Node* start, Node* last);

class Node{
public:
    int info;
    Node *link;
};


Node *Head,*Tail;
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        creation(tmp);
    }
    traverse();

    bool stopLoop = false;
    while(true){

        cout << "1. first delete\t2. last delete\n3. before delete\t4. after delete\n5. given delete\t-1.exit\n. Command:";
        cin >> tmp;
        switch(tmp){
        case 1:
            cout << "Not available" << endl;
            break;
        case 2:
            lastDelete();
            break;
        case 3:
            beforeDelete();
            break;
        case 4:
            deleteAfterGiven();
            break;
        case 5:
            deleteGiven();
            break;
        default:
            stopLoop = true;
            break;
        }
        if(stopLoop) break;
        traverse();
    }
}

Node* binSearch(Node *Head,int s_item){
    Node *srt = Head,*last = NULL,*mid;
    do{
        mid = middle(srt,last);
        if(mid == NULL){
            return NULL;
        }

        if(mid ->info == s_item) return mid;

        if(mid ->info < s_item){
            srt = mid->link;
        }
        else{
            last = mid;
        }
    }
    while(srt != last);
}

Node* middle(Node* start, Node* last){
    Node *slow,*fast;
    slow = start;
    fast = start->link;
    while(fast != last){
        fast = fast->link;
        if(fast != last){
            slow = slow->link;
            fast = fast->link;
        }
    }
    return slow;
}

void beforeInsert(){
    int s_item;
    cin >> s_item;
    Node *srt,*tmp;
    for(srt = Head; ;){
        if(srt->info == s_item){
            if(srt == Head){
                firstInsert();
            }
            else{
                Node *ptr;
                ptr = new Node();
                int item;
                cin >> item;
                ptr -> info = item;
                tmp->link = ptr;
                ptr ->link = srt;
            }
            break;
        }
        else{
            tmp = srt;
            srt = srt->link;
            if(srt==NULL) break;
        }
    }
    if(srt == NULL) cout <<"Not found" << endl;
}

void afterInsert(){
    int s_item;
    cin >> s_item;
    Node *srt;
    for(srt = Head;;){
        if(srt->info == s_item){
            int item;
            cin >> item;
            Node *ptr;
            ptr = new Node();
            ptr ->info = item;
            ptr ->link = srt->link;
            srt->link = ptr;
            break;
        }
        else{
            srt = srt->link;
            if(srt == NULL ) break;
        }
    }
    if(srt == NULL) cout <<"Item not found" << endl;
}

void beforeDelete(){
    int s_item;
    cin >> s_item;

    Node *srt,*tmp = NULL,*prev = NULL;

    for(srt = Head; srt != NULL ; srt = srt->link){
        if(srt->info == s_item){
            if(tmp == NULL){
                cout << "Can't delete before 1st item" << endl;
            }
            else if(tmp == Head){//first delete
                Head = Head->link;
            }
            else{
                prev ->link = srt;
            }
            break;
        }
        else{
            prev = tmp;
            tmp = srt;
        }
    }
    if(srt == NULL){ cout << "Item not found" << endl; }
}

void deleteAfterGiven(){
    int s_item;
    cin >> s_item;

    Node *srt;
    for(srt = Head; srt != NULL ; srt = srt->link){
        if(srt->info == s_item){
            if(srt->link == NULL){
                cout << "Can't delete after last item" << endl;
            }
            else{
                srt ->link = srt->link->link;
            }
            break;
        }
    }
    if(srt == NULL){
        cout << "Item not found" << endl;
    }
}

void deleteGiven(){
    int s_item;
    cout << "Enter search item: ";
    cin >> s_item;

    Node *srt,*tmp;

    for(srt = Head; srt != NULL; srt = srt->link){
        if(srt->info == s_item){
            if(srt == Head){ Head = Head->link; }
            else{ tmp ->link = srt->link; }
            break;
        }
        else{
            tmp = srt;
        }
    }
    if(srt == NULL) cout << "Item not found." << endl;
}

void lastDelete(){
    Node *srt,*tmp;
    srt = Head;
    while(srt->link != NULL){
        tmp = srt;
        srt = srt->link;
    }
    tmp->link = NULL;
}

void lastInsert(){
    int item;
    cin >> item;
    Node *ptr;
    ptr = new Node();
    ptr ->info = item;
    ptr ->link = NULL;

    Node *tmp;
    tmp = Head;
    while(tmp->link != NULL){
        tmp = tmp->link;
    }
    tmp->link = ptr;
}

void firstInsert(){
    int item;
    cin >> item;
    Node *ptr;
    ptr = new Node();
    ptr->info = item;

    ptr ->link = Head;
    Head = ptr;
}


void creation(int item){
    Node *ptr = new Node();
    ptr ->info = item;
    ptr ->link = NULL;

    if(Head == NULL){
        Head = ptr;
        Tail = ptr;
    }
    else{
        Tail ->link = ptr;
        Tail = ptr;
    }
}

void traverse(){
    Node *srt;
    srt = Head;
    while(srt != NULL){
        cout << srt->info << "\t";
        srt = srt->link;
    }
    cout << endl;
}
