#include<stdio.h>
int main(){
    int n,i,j,l,t;
    long long int k,x,y,z=0,y1,yy;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%lld",&n,&k);
        z=0;
        y=n-2;
        while(y>=0){
            yy=n-1;
            while(yy>y){
                z++;
                if(z==k){
                    x=y;
                    y1=yy;
                    break;
                }
                else{
                    yy--;
                }
            }
            if(z==k){
                break;
            }
            else{
                y--;
            }
        }
        for(j=0;j<n;j++){
            if(j==x||j==y1){
                printf("b");
            }
            else{
                printf("a");
            }
        }
        printf("\n");
    }
return 0;
}
