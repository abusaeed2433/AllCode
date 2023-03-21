#include<stdio.h>
int main(){
    int n,t,i,j,y=0,z;
    scanf("%d%d",&n,&t);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t=t-(86400-a[i]);
        if(y==1){
            continue;
        }
        else{
            if(t<=0){
                z=i+1;
                y=1;
            }
            else{
                continue;
            }
        }
    }
    printf("%d",z);
    return 0;
}
