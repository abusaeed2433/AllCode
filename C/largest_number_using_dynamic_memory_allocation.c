#include<stdio.h>

int main(){
    int n;
    printf("Enter number of inputs = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(*arr<*(arr+i+1)){
            *arr = *(arr+i+1);
        }
    }
    printf("Maximum number is = %d",*arr);

}
