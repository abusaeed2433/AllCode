#include<stdio.h>
main()
{
    int a[100000],n,i,w=0,x=0,y=0,z=0,p,j,l,r,k,taxi,total,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==4)
            w++;
        else if(a[i]==3)
            x++;
        else if(a[i]==2)
            y++;
        else if(a[i]==1)
            z++;
    }
    if(x==z&&x!=0)
    {
        p=x;
    }
    else if(x>z)
    {
        p=z;
        j=x-z;
    }
    else if(z>x)
    {
        p=x;
        l=z-x;
    }
    if(y==0)
    {
        r=0;
    }
    else if(y%2==0)
    {
        r=y/2;
    }
    else if(y%2!=0)
    {
        r=y/2;
        k=1;
    }
    if(j==0)
    {
        if(l<=2)
        {
            taxi=1;
        }
        else if(l>2)
        {
            taxi=1;
            t=l-2;
            if(t<=4)
            {
                taxi++;
            }
            else if(t%4==0)
            {
                taxi=taxi+(t/4);
            }
            else
                taxi=taxi+(t/4)+1;
        }
        else
        {
            taxi=j+1;
        }
    }
    total=w+p+r+taxi;
    printf("%d",total);







}
