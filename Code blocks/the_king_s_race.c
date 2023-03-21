#include<stdio.h>
int main(){
    long long int n,x,y,c,d;
    scanf("%lld%lld%lld",&n,&x,&y);
    c=y-1;
    d=n-x;
    if(c<=d){
        printf("White");
    }
    else{
        printf("Black");
    }
    return 0;
}
