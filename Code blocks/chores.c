#include<stdio.h>
int main(){
    int n,k,x,i,j,sum=0;
    scanf("%d%d%d",&n,&k,&x);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]<=a[j+1]){
                continue;
            }
            else{
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    for(i=0;i<n-k;i++){
        sum+=a[i];
    }
    sum+=k*x;
    printf("%d",sum);
    return 0;
}
