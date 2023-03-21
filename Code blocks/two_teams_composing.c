#include<stdio.h>
int main(){
    int t,n,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        //sorting//
        for(j=0;j<n;j++){
            for(k=0;k<n-1;k++){
                if(a[k]<=a[k+1]){
                    continue;
                }                   //sorting in ascending order//
                else{
                    a[k]=a[k]+a[k+1];
                    a[k+1]=a[k]-a[k+1];
                    a[k]=a[k]-a[k+1];
                }
            }
        }
        //sorted//
        int x=0,y=0,z=0,zz;
        //counting started//
        for(j=0;j<n-1;j++){
            if(a[j]==a[j+1]){
                x++;
                z++;
            }
            else{
                if(y<=x){     //counting number of same and different numbers//
                    y=x;
                    x=0;
                }
                else{
                    x=0;
                }
            }
        }
        if(y<=x){
            y=x;
        }
        zz=n-z;
        //counted above//
        //calculating and printing//
        if(y==0){
            if(n<2){
                printf("0\n");
            }
            else{
                printf("1\n");
            }
        }
        else{
            if(zz>(y+1)){
                printf("%d\n",y+1);
            }
            else{
                y=(y>=zz)?zz:y;
                printf("%d\n",y);
            }
        }
    }
    return 0;
}
