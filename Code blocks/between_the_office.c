#include<stdio.h>
int main()
{
    int i,n,x,z=0;
    char a[102];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    scanf("%c",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]=='S')
        {
            if(a[i]==a[i+1])
            {
                continue;
            }
            else
            {
                z++;
            }
        }
    else if(a[i]=='F')
        {
            if(a[i]==a[i+1])
            {
                continue;
            }
            else
            {
                z--;
            }
        }
    }
    if(z>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
