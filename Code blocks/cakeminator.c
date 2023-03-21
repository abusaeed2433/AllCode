#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int a[12][12];
    char s[12];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        //creating matrix for easy calculation//
        for(j=0;j<m;j++)
        {
            if(s[j]=='S')
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    //checking row wise//
    int sum=0,q=0,p=0;
    for(i=0;i<n;i++)
    {
        int z=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                z=0;
                break;
            }
            else
            {
                z=1;
            }
        }
        if(z==1)
        {
            sum+=m;
            q++;
        }
        else
        {
            continue;
        }
    }
    //checking column wise//
    for(j=0;j<m;j++)
    {
        int z=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]==1)
            {
                z=0;
                break;
            }
            else
            {
                z=1;
            }
        }
        if(z==1)
        {
            p++;
            sum+=n;
        }
        else
        {
            continue;
        }
    }
    //printing value//
    printf("%d",(sum-(p*q))); //(p*q) are the numbers of intersection point//
    return 0;
}
