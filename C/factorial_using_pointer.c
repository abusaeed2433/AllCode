#include<stdio.h>

void findFactorial(long long int *a,int num);

int main(){
    int num;
    long long int fact=1;
    scanf("%d",&num);
    findFactorial(&fact,num);
    printf("Factorial of %d is = %lld",num,fact);
    return 0;
}
void findFactorial(long long int *a,int num){
    while(num){
        *a *= num;
        num--;
    }
}
