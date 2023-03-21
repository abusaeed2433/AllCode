#include<stdio.h>
int main()
{
    int t,a,b,i,j,x[10000],c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0)
        {
            x[i]=0;
        }
        else
        {
            c=a%b;
            x[i]=b-c;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
return 0;
}
