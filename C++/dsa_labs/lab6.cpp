#include<bits/stdc++.h>


using namespace std;


//stack using array and linked list


class Node{
public:
    int info;
    Node *link;
};


Node *stk = NULL;

void push2(int item){
    Node *ptr = new Node();
    ptr->info = item;
    ptr->link = stk;
    stk = ptr;
}

void showAll2(){
    if(stk==NULL){
        cout << endl;
        return;
    }
    cout << stk->info << "\t";
    stk = stk->link;
    showAll2();
}


int top = -1;
int arr[15];

void push(int item){
    if(top>=14){
        cout << "overflow" << endl;
        return;
    }

    top++;
    arr[top] = item;
}

void showAll(){
    if(top<0){
        cout << endl;
        return;
    }
    cout << arr[top] << "\t";
    top--;
    showAll();
}


int main()
{

    while(true)
    {
        cout << "1. Array" << "\t" << "else.Linked list" << endl;

        cout << "Command: ";
        int choice;
        cin >> choice;

        int n;
        if(choice==1) //array
        {
            cout << "Enter size[maximum 15]: ";
            cin >> n;
            cout << "Enter items: ";
            for(int i=0;i<n;i++){
                int tmp;
                cin >> tmp;
                push(tmp);
            }
            showAll();
        }
        else
        {
            int n;
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter items: ";
            for(int i=0;i<n;i++){
                int tmp;
                cin >> tmp;
                push2(tmp);
            }

            cout << "Showing all items: "<< endl;

            showAll2();
        }
    }

}
