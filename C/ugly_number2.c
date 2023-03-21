#include<stdio.h>
int main(){
    int temp=1,count=1,n;
    while(count<1501){
        n=temp;
        while(n%2==0)n/=2;
        while(n%3==0)n/=3;
        while(n%5==0)n/=5;
        if(n==1){
            count++;
        }
        temp++;
    }
    printf("The 1500'th ugly number is %d.\n",temp-1);

    return 0;
}
