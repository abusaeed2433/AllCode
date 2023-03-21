#include<stdio.h>
int main()
{
    int n,i,c=25,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(c<a[i])
        {
            c=a[i];
        }
        else
        {
            continue;
        }
    }
    if(c<=25)
    {
        printf("0");
    }
    else
    {
        printf("%d",c-25);
    }
    return 0;
}
