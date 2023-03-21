#include<stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>=a[j+1]){
                continue;
            }
            else{
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    if(n==k){
        printf("0 0");
    }
    else if(n<k){
        printf("-1");
    }
    else{
        printf("%d %d",a[k]+1,a[k]+1);
    }
    return 0;
}
