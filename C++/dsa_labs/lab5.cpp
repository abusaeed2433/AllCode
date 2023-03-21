#include<bits/stdc++.h>

using namespace std;


//deletion in two way linked list


class Node{
public:
    int info;
    Node *prev;
    Node *next;
};

Node *Head = NULL;
Node *Tail = NULL;

void firstDelete(){
    if(Head==NULL){
        cout << "Can't delete" << endl;
        return;
    }

    Head = Head->next;
    if(Head==NULL){
        Tail = NULL;
    }
    else{
        Head -> prev = NULL;
    }
}

void lastDelete(){
    if(Tail == NULL){
        cout << "Can't delete" << endl;
        return;
    }

    Tail = Tail->prev;
    if(Tail==NULL){
        Head = NULL;
    }
    else{
        Tail->next = NULL;
    }
}


void deleteGiven(int s_item){
    Node *srt;
    for(srt = Head; srt!=NULL; srt = srt->next){
        if(srt->info == s_item){
            if(srt == Head && srt == Tail){//single item
                Head = NULL;
                Tail = NULL;
            }
            else if(srt==Head){
                Head = Head->next;
                Head->prev = NULL;
            }
            else if(srt==Tail){
                Tail = Tail->prev;
                Tail->next = NULL;
            }
            else{
                srt->prev ->next = srt->next;
                srt->next ->prev = srt->prev;
            }
            break;
        }
    }
    if(srt == NULL){
        cout << "Item not found" << endl;
    }

}


void beforeDelete(int s_item){
    Node *srt;
    for(srt = Head; srt!=NULL; srt = srt->next){
        if(srt->info == s_item){
            if(srt==Head){
                cout << "Can't delete before first" << endl;
            }
            else{
                if(srt->prev->prev == NULL){//first delete
                    Head = Head->next;
                    Head ->prev = NULL;
                }
                else{
                    srt->prev->prev->next = srt;
                    srt->prev = srt->prev->prev;
                }
            }
            break;
        }
    }
    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}

void afterDelete(int s_item){
    Node *srt;
    for(srt=  Head; srt!= NULL ; srt = srt->next){
        if(srt->info == s_item){
            if(srt==Tail){
                cout << "Can't delete after last" << endl;
            }
            else if(srt->next->next == NULL){//last delete
                Tail = Tail->prev;
                Tail->next = NULL;
            }
            else{
                srt->next = srt->next->next;
                srt->next->prev = srt;
            }
            break;
        }
    }
    if(srt==NULL){
        cout << "Item not found" << endl;
    }
}


int main(){
    cout << "fix all first" << endl;
    return 0;
}
