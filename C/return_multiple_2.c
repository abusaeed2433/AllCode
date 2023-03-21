#include<stdio.h>

struct container{
    int a,b;
};
struct container swapNumber(int ,int);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    struct container c;
    c=swapNumber(a,b);
    a=c.a;
    b=c.b;
    printf("%d %d\n",a,b);

}
struct container swapNumber(int a,int b){
    struct container c1;
    c1.a=b;
    c1.b=a;
    return c1;
}
