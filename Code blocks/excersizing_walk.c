#include<stdio.h>
int main()
{
    int x,y,x1,y1,x2,y2,t,a,m,n,b,c,d,i,j,z[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
        a=a-x;
        c=c-y;
        m=b-a;
        n=d-c;
        if(m>=x1&&m<=x2&&n<=y2&&n>=y1)
        {
            z[i]=1;
        }
        else
        {
            z[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(z[i]==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
