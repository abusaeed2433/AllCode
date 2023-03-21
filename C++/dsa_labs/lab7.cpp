#include<bits/stdc++.h>

using namespace std;


// postfix evaluation


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


int getAndPop(){
    if(stk == NULL){
        cout << "Stack is empty" << endl;
        return 0;
    }

    int item = stk->info;
    stk = stk->link;
    return item;
}


bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch == '/' || ch == '^';
}

int findResult(char ch){
    int v2 = getAndPop();
    int v1 = getAndPop();

    int ans = 1;
    if(ch=='^'){
        if(v2!=0) ans= v1;
        for(int i=0;i<v2-1;i++)ans*=v1;
        return ans;
    }

    if(ch=='/') return v1/v2;
    if(ch=='*') return v1*v2;
    if(ch=='-') return v1-v2;
    if(ch=='+') return v1+v2;

    return 0;
}

void evaluate(string s){
    bool numFound = false;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(numFound) {
                push(ans);
                ans = 0;
                numFound = false;
            }
        }
        else if(isOperator(s[i])){
            int res = findResult(s[i]);
            push(res);
        }
        else{
            numFound = true;
            ans*=10;
            ans+= (s[i]-48);
        }
    }
    if(numFound) push(ans);
}


int main(){
    string s;
    while(true){
        getline(cin,s);
        if(s=="-1") break;
        evaluate(s);

        cout << "Ans is: " << getAndPop() << endl;
    }
}
