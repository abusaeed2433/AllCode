#include<stdio.h>
main()
{
    int a[100000],n,i,w=0,x=0,y=0,z=0,j,t,tt=0,taxi,sum;
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

    {
         j=(2*w)+y;
        if(j%2==0)
        {
            taxi=j/2;
            t=0;
        }
        else if(j%2!=0)
        {
            taxi=j/2;
            t=1;
        }
        if(x>=z)
        {
            taxi=taxi+x;
        }
        else if(x<z)
        {
            taxi=taxi+x;
            tt=tt+(z-x);
        }
        t=2*t+tt;
        if(t%4==0)
        {
            taxi=taxi+(t/4);
            printf("%d",taxi);
        }
        else
        {
            taxi=taxi+(t/4)+1;
            printf("%d",taxi);
        }
    }

}

