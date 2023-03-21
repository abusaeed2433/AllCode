#include<stdio.h>
#include<math.h>
int main(){
    int n,m,i,j,c,d;
    scanf("%d%d",&n,&m);
    if(n%m==0){
        c=n/m;
    }
    else{
        c=(n/m)+1;
    }
    d=n+c;
    for(i=0;c>=m;i++){
        d+=c/m;
        if(c%m==0){
            c=c/m;
        }
        else{
            c=(c/m)+1;
        }
    }
    printf("%d",d);
    return 0;
}
