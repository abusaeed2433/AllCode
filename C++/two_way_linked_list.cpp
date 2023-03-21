#include<bits/stdc++.h>

using namespace std;

void creation(int);
void traverse();
void firstDelete();
void lastDelete();
void beforeDelete(int);
void afterDelete(int);
void deleteGiven(int);

class Node
{
public:
    int info;
    Node *prev, *next;
};


Node *Head, *Tail;
int main()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        creation(x);
    }

    traverse();
    while(true)
    {
        int tmp;
        cout << "1. traverse\t2. first delete\n3. last delete\t4. before delete\n5. after delete\t6. delete given\nEnter command: ";
        cin >> tmp;
        if(tmp==-1) break;

        if(tmp == 1) traverse();
        else if(tmp == 2)
        {
            firstDelete();
            traverse();
        }
        else if(tmp == 3)
        {
            lastDelete();
            traverse();
        }
        else if(tmp == 4)
        {
            int sItem;
            cout << "Enter search item: ";
            cin >> sItem;
            beforeDelete(sItem);
            traverse();
        }
        else if(tmp == 5)
        {
            int sItem;
            cout << "Enter search item: ";
            cin >> sItem;
            afterDelete(sItem);
            traverse();
        }
        else if(tmp == 6)
        {
            int sItem;
            cout << "Enter search item: ";
            cin >> sItem;
            deleteGiven(sItem);
            traverse();
        }
    }
}

void deleteGiven(int sItem)
{
    Node *srt;
    for(srt = Head; srt != NULL; srt = srt ->next)
    {
        if(srt ->info == sItem)
        {
            if(srt == Head && srt == Tail) //list has only one item
            {
                Head = NULL;
                Tail = NULL;
            }
            else if(srt == Head){//first delete
                Head = Head ->next;
                Head ->prev = NULL;
            }
            else if(srt == Tail){//last delete
                Tail = srt ->prev;
                Tail ->next = NULL;
            }
            else{//other case
                srt ->prev ->next = srt ->next;
                srt ->next ->prev = srt ->prev;
            }
            break;
        }
    }
    if(srt == NULL){ cout <<"Item not found" << endl; }
}

void afterDelete(int sItem)
{
    Node *srt;
    for(srt = Head; srt != NULL ; srt = srt ->next)
    {
        if(srt ->info == sItem)
        {
            if(srt->next == NULL)
            {
                cout << "Can't delete after last" << endl;
            }
            else
            {
                if(srt ->next ->next == NULL) //last delete
                {
                    srt ->next = NULL;
                    Tail = srt;
                }
                else
                {
                    srt ->next ->next ->prev = srt;
                    srt ->next = srt ->next ->next;
                }
            }
            break;
        }
    }
    if(srt == NULL)
    {
        cout << "Item not found" << endl;
    }
}

void beforeDelete(int sItem)
{
    Node *srt;
    for(srt = Head; srt != NULL ; srt = srt->next)
    {
        if(srt ->info == sItem)
        {
            if(srt == Head)
            {
                cout << "Can't delete before 1st" << endl;
            }
            else
            {
                if(srt ->prev ->prev == NULL)
                {
                    Head = srt;
                    srt ->prev = NULL;
                }
                else
                {
                    ( srt ->prev ->prev ) ->next = srt;
                    srt ->prev = ( srt ->prev ->prev );
                }
            }
            break;
        }
    }
    if(srt==NULL)
    {
        cout <<"Item not found" << endl;
    }

}

void lastDelete()
{
    if(Head == NULL)
    {
        cout << "Under flow" << endl;
    }
    else
    {
        Tail = Tail ->prev;
        if(Tail == NULL)// list contains 1 item which is deleted
        {
            Head = NULL;
        }
        else
        {
            Tail ->next = NULL;
        }
    }
}

void firstDelete()
{
    if(Head == NULL)
    {
        cout << "No item to delete[UNDER FLOW]" << endl;
        return;
    }
    Head = Head ->next;
    if(Head != NULL)
    {
        Head->prev = NULL;
    }
    else
    {
        Tail = NULL;
    }
}

void traverse()
{
    Node *srt;
    srt = Head;

    if(Head == NULL)
    {
        cout << endl << "List is empty" << endl << endl;
        return;
    }

    cout << endl <<"Forward traverse..." << endl;
    int counter = 0;
    while(srt != NULL)
    {
        cout << srt ->info << "\t";
        srt = srt->next;
        counter++;
    }
    cout << endl << "Backward traverse..." << endl;

    int arr[counter];
    int n = counter;
    counter--;
    srt = Tail;
    while(srt != NULL)
    {
        arr[counter] = srt->info;
        counter--;
        srt = srt->prev;
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
}

void creation(int x)
{
    Node *ptr = new Node();
    ptr ->info = x;
    ptr ->prev = NULL;
    ptr ->next = NULL;
    if(Head == NULL)
    {
        Head = ptr;
        Tail = ptr;
    }
    else
    {
        Tail ->next = ptr;
        ptr ->prev = Tail;
        Tail = ptr;
    }
}
