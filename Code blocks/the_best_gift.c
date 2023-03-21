#include<stdio.h>
int main(){
    long long int n,r,c,y=0,i,j;
    scanf("%lld%lld",&n,&r);
    long long int a,x[n];
    for(i=0;i<n;i++){
        x[i]=0;
    }
    long long int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        x[a-1]++;
    }
    c=x[0];
    for(i=0;i<r-1;i++){
        y+=x[i]*(n-c);
        c+=x[i+1];
    }
    printf("%lld",y);
    return 0;
}
