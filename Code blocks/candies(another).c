#include<stdio.h>
int main(){
    int n,m,i,j,c,d;
    scanf("%d%d",&n,&m);
    c=n/m;
    d=n%m;
    if(d==0){
        for(i=0;i<m;i++){
            printf("%d ",c);
        }
    }
    else{
        for(i=0;i<d;i++){
            printf("%d ",c+1);
        }
        for(i=d;i<m;i++){
            printf("%d ",c);
        }
    }
    return 0;
}
