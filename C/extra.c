#include<stdio.h>
#include<math.h>
int getFact(int n){
    if(n<2) return 1;
    return n*getFact(n-1);
}

void printf(int a){
    printf("%d\n",a);
}

// 5*4*3*2*1=120

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",getFact(n));
    return 0;
}

