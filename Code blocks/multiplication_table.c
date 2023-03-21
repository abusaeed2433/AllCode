#include<stdio.h>
int main(){
    int n,m,i,j,x=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        if(m%i==0&&(m/i)<=n){
            x++;
        }
        else{
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
