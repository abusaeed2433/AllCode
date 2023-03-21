#include<stdio.h>
int main(){
    int a,b,c,n,i,j,k,x=0;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    int d[n];
    for(i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    for(j=0;j<n;j++){
        if(d[j]>b&&d[j]<c){
            x++;
        }
        else{
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
