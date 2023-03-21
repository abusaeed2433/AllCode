#include<stdio.h>


long long int reverseAndAdd(long long int n){
    long long int a=0,temp=n;
    while(n>0){
        a*=10;
        a+=n%10;
        n/=10;
    }
    return a+temp;
}
int isPalindrom(long long int n){
    long long int a=0,temp=n;
    while(n>0){
        a*=10;
        a+=n%10;
        n/=10;
    }
    return a==temp;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t){
        t--;
        int a;
        scanf("%d",&a);
        long long int n;
        n=a;
        int count=0;
        while(!isPalindrom(n)){
            n = reverseAndAdd(n);
            count++;
        }
        printf("%d %lld\n",count,n);

    }
    return 0;
}
