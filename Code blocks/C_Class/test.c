#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a>0){
        printf("%d",a%2);
        a/=2;
    }
    return 0;
}
