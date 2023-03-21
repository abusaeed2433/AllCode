#include<stdio.h>
int main()
{
    int t,i,j,a=0,b=0;
    scanf("%d",&t);
    int x[t],y[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        if(x[i]>0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a==1||b==1||a==0||b==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
