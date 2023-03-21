#include<stdio.h>

int main(){
    int arr[10];
    long long int sum=0;
    for(int i=0;i<10;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of given number = %lld\n",sum);
    return 0;
}
