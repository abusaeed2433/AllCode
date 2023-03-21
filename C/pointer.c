#include<stdio.h>

int main(){
    int a,b,*c,**d,*e;
    scanf("%d%d",&a,&b);
    c = &a;
    d = &c;
    printf("%d | %d | %d | %d | %d | %d\n",c,d,e,&a,&b,*d);
    return 0;
}
