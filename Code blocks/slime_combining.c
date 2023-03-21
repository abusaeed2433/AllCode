#include<stdio.h>
int main(){
    int n,i,j,x=1,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=2*x;
        if(x>n){
            z=i;
            if(n==1){
                printf("1");
            }
            else{
                printf("%d ",z);
            }
            n=n-(x/2);
            x=1;
            i=0;
        }
        else{
            continue;
        }
    }
    return 0;

}
