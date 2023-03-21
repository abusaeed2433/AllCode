#include<stdio.h>

long long int findFact(int);


int main(){
    int n;
    scanf("%d",&n);
    long long int ans = findFact(n);
    printf("Factorial of %d is %lld.",n,ans);
    return 0;
}

long long int findFact(int n){
    if(n==0) return 1;
    else return n*findFact(n-1);
}
