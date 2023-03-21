#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int y=1,zz=1;
    for(i=0;i<n;i++)
    {
        int x=1,z=1;
        if(a[i]==1){
            for(j=i+1;j<n;j++){
                if(a[j]==1){
                    x++;
                }
                else{
                    for(k=j;k<n;k++){
                        if(a[j]==2){
                            x++;
                        }
                        else{
                            if(y<x){
                                y=x;

                                break;
                            }
                            else{
                                break;
                            }
                        }
                    }
                    if(y<x){
                        y=x;
                    }
                }
            }
            j=k+1;
        }
        else
        {
            z=1;
            for(j=i+1;j<n;j++){
                if(a[j]==2){
                    z++;
                }
                else{
                    for(k=j;j<n;k++){
                        if(a[j]==1){
                            z++;
                        }
                        else{
                            if(zz<z){
                                zz=z;
                                break;
                            }
                            else{
                                break;
                            }
                        }
                    }
                    if(zz<z){
                        zz=z;
                    }
                }
            }
        }
        i=k+1;
    }
    y=(y>=zz)?zz:y;
    printf("%d",(2*y));
    return 0;
}
