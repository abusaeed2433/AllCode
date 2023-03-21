#include<stdio.h>

int maximum(int,int,int);

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("maximum number is = %d\n",maximum(a,b,c));
    return 0;
}

int maximum(int a,int b,int c){
    return a>b? a>c?a:c: b>c?b:c;
}
