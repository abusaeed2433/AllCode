#include<stdio.h>
int main(){
    int t,a,b=1,tt=0,i,j,z=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a);
        if(z==0){
            if((a-b)>=15){
                z=1;
                if((90-tt)>15){
                    tt=tt+15;
                }
                else{
                    tt=90;
                }
            }
            else{
                b=a+1;
                tt=a;
            }
        }
        else{
            continue;
        }
    }
    if(z==0){
        if((90-tt)>15){
            printf("%d",tt+15);
        }
        else{
            printf("90");
        }
    }
    else{
        printf("%d",tt);
    }
    return 0;
}
