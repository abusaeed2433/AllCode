#include<stdio.h>
int main()
{
    int a,b,c,d[6],i,j;
    scanf("%d%d%d",&a,&b,&c);
    d[0]=a*b*c;
    d[1]=a+b+c;
    d[2]=c*(a+b);
    d[3]=a*(b+c);
    d[4]=a+b*c;
    d[5]=c+a*b;
    //sorting in descending order for maximum value//
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(d[j]>=d[j+1])
            {
                continue;
            }
            else
            {
                d[j]=d[j]+d[j+1];
                d[j+1]=d[j]-d[j+1];
                d[j]=d[j]-d[j+1];
            }
        }
    }
    printf("%d",d[0]);
    return 0;
}
