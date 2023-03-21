#include<bits/stdc++.h>

using namespace std;

//deletion in one way linked list


class Node{
public:
    int info;
    Node *link;
};

Node *Head = NULL;

void firstDelete(){
    if(Head==NULL){
        cout << "Underflow" << endl;
        return;
    }

    Head = Head->link;
}

void lastDelete(){
    Node *srt, *tmp = NULL;
    for(srt = Head; srt->link!=NULL; srt = srt->link){
        tmp = srt;
    }
    if(tmp == NULL){
        Head = NULL;
    }
    else{
        tmp->link = NULL;
    }
}

void beforeDelete(int s_item){
    Node *srt,*tmp = NULL, *prev = NULL;
    for(srt = Head; srt!=NULL;srt=srt->link){
        if(srt->info == s_item){
            if(srt==Head){
                cout << "Can't delete before first" << endl;
            }
            else if(prev == NULL){
                Head = Head->link;
            }
            else{
                prev->link = srt;
            }
            break;
        }
        else{
            prev = tmp;
            tmp = srt;
        }
    }

    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}

void afterDelete(int s_item){

    Node *srt;
    for(srt =Head; srt!=NULL; srt = srt->link){
        if(srt->info == s_item){
            if(srt->link == NULL){
                cout << "Can't delete after last" << endl;
            }
            else{
                srt->link = srt->link->link;
            }
            break;
        }
    }
    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}


void deleteGiven(int s_item){
    Node *srt, *tmp = NULL;
    for(srt = Head; srt != NULL; srt = srt->link){
        if(srt->info == s_item){
            if(srt==Head){
                Head = Head->link;
            }
            else{
                tmp->link = srt->link;
            }
            break;
        }
        else{
            tmp = srt;
        }
    }
    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}

int main(){
    cout << "Fix all first(2)" << endl;
    return 0;
}
