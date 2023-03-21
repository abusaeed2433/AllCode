#include<stdio.h>

void show();
void show1();

int main(){
    while(1){
        int a;
        scanf("%d",&a);
        a==1? show() :show1();
    }
    return 0;
}

void show(){
    static b,common;
    printf("static b = %d\n",b);
    printf("static common = %d\n",common);
    b++;
    common++;
}

void show1(){
    static c,common; //common is totally different that "common in function show"
    printf("static c = %d\n",c);
    printf("static common = %d\n",common);
    c++;
    common++;
}
/*
    1 -- b=0, common =0
    1 -- b=1, common =1
    1 -- b=2, common =2
    2 -- c=0, common =0
    2 -- c=1, common =1
    1 -- b=3, common = 3 (be careful here) [two common are completely different]
*/

