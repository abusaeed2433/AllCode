#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(a>=b)?a:b;
    c=(7-c);
    if(c==1){
        printf("1/6");
    }
    else if(c==2){
        printf("1/3");
    }
    else if(c==3){
        printf("1/2");
    }
    else if(c==4){
        printf("2/3");
    }
    else if(c==5){
        printf("5/6");
    }
    else{
        printf("1/1");
    }
    return 0;
}
