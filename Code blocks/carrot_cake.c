#include<stdio.h>
int main(){
    int n,t,k,d,x;
    scanf("%d%d%d%d",&n,&t,&k,&d);
    n=n-(int)(d/t)*k;
    d=d-(int)(d/t)*t;
    if(n>0){
        if((n-k)>0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}
