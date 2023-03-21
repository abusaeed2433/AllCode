#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d%d",&n,&m);
    char a[3];
    int z=0;
    for(i=0;i<(n*m);i++){
        scanf("%s",&a);
        if(z==0){
            if(a[0]=='B'||a[0]=='G'||a[0]=='W'){
                continue;
            }
            else{
                z=1;
            }
        }
        else{
            continue;
        }
    }
    if(z==1){
        printf("#Color");
    }
    else{
        printf("#Black&White");
    }
    return 0;
}
