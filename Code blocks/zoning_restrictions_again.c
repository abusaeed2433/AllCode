#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,h,s,i,j,sum=0,w=0,m;
    scanf("%d%d%d",&n,&h,&s);
    int l[s],r[s],x[s],b[s];
    for(i=0;i<s;i++)
    {
        scanf("%d%d%d",&l[i],&r[i],&x[i]);
    }
    for(i=0;i<n;i++)
    {
        w=0;
        m=1000000000;
        //finding maximum restriction for building i for l//
        for(j=0;j<s;j++)
        {
            if((i+1)>=l[j]&&(i+1)<=r[j])
            {
                w=1;
                if(m<x[j])
                {
                    continue;
                }
                else
                {
                    m=x[j];
                }
            }
            else
            {
                continue;
            }
        }
        if(w==1)//if there is any restriction then, restricted value will be calculated//
        {
            sum=sum+ceil(pow(m,2));
        }
        else if(w==0)//no restriction, so maximum height is calculated//
        {
            sum=sum+ceil(pow(h,2));
        }
    }
    printf("%d",sum);
    return 0;
}
