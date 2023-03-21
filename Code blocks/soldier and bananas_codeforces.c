#include<stdio.h>
int main()
{
    int k,n,w,a,s,t,u;
    //k= price for 1st banana, n=number of banana w= amount of money //
    scanf("%d%d%d",&k,&w,&n);
        a=n*(n+1);
        s=a/2;
        t=s*k;
        if(w>=t)
        {
            printf("0");
        }
        else
        {
            u=t-w;
            printf("%d",u);
        }

}
