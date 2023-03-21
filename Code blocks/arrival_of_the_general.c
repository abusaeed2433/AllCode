#include<stdio.h>
int main()
{
    int n,i,j,k,e,f;
    scanf("%d",&n);
    int a[n],b=0,c=200;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(b<a[i])
        {
            b=a[i];/*maximum value*/
            e=i;
        }
        if(c>=a[i])
        {
            c=a[i];/*minimum value*/
            f=i;
        }
    }
    if(f>e)
    {
        printf("%d",(n-1-f+e));
    }
    else
    {
        printf("%d",(n-1-f+e-1));
    }
    return 0;
}
