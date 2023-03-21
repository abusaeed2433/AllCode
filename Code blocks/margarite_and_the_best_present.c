#include<stdio.h>
int main()
{
    int n,i,a,j,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int k,s=0;
        scanf("%d%d",&a,&b);
        if(a%2==0){
            k=1;
        }
        else{
            k=-1;
        }
        for(j=a;j<=b;j++)
        {
            s+=k*j;
            k=-k;
        }
        printf("%d\n",s);
    }
return 0;
}
