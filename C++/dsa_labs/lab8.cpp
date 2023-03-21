#include<bits/stdc++.h>

using namespace std;


//infix to postfix conversion. idk if its working correctly



class Node{
public:
    int info;
    Node *link;
};

Node *stk = NULL;

void push(int item){
    Node *ptr = new Node();
    ptr->info = item;
    ptr->link = stk;
    stk = ptr;
}

bool isEmpty(){
    return stk==NULL;
}

char getAndPop(){
    if(stk == NULL){
        cout << "Stack is empty";
        return ' ';
    }

    char ch = stk->info;
    stk = stk->link;
    return ch;
}

bool isOperator(char ch){
    return ch=='+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

bool isSameOrHigh(char op1, char op2){
    if(op1 == '^') return true;

    if((op1 == '/' || op1 == '*') && op2!='^') return true;

    if((op1 == '+' || op1=='-') && (op2=='+' || op2=='-')) return true;

    return false;
}

string findPostfix(string s){
    s+=")";
    push('(');

    string p = "";

    for(int i=0;i<s.size();i++){

        if(s[i]==' ') continue;
        if(s[i]=='('){
            push('(');
        }
        else if(s[i]==')'){
            char ch = getAndPop();
            while(ch != '('){
                p+=ch;
                ch = getAndPop();
            }
        }
        else if(isOperator(s[i])){
            char ch = getAndPop();
            if(!isOperator(ch)){
                push(ch);
                push(s[i]);
                continue;
            }

            while(true){
                if(isSameOrHigh(ch,s[i])){
                    p+=ch;
                    ch = getAndPop();
                    if(!isOperator(ch)){
                        push(ch);
                        break;
                    }
                }
                else{
                    push(ch);
                    break;
                }

            }
            push(s[i]);
        }
        else{
            p+=s[i];
        }
    }
    return p;
}


int main(){
    string s;
    while(true){
        cout << "Enter infix expression: ";
        getline(cin,s);

        if(s=="-1") break;

        cout << "Equivalent postfix expression is:" << endl << findPostfix(s) << endl;

    }
}
