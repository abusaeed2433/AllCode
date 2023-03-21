#include<stdio.h>

int main(){
    int *arr,n;
    printf("Enter total number = ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter %d =",i+1);
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}
