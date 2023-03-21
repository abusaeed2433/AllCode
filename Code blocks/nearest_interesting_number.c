#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,a,b,d,i,j,k,c[6],x;
    scanf("%d",&n);
    //calculating//
    for(i=n;;i++)
    {
        a=i;
        int sum=0;
        //calculating length of i//
        for(j=0;j<32;j++)
        {
            b=(int)(ceil(pow(10,j)));
            if((a/b)>=1)
            {
                continue;
            }
            else
            {
                x=j;
                break;
            }
        }
        //calculating digits & sum//
        for(j=0;j<x;j++)
        {
            c[j]=a%10;
            a=a/10;
            sum+=c[j];
        }
        if(sum%4==0)
        {
            printf("%d",i);
            break;
        }
        else
        {
            continue;
        }
    }
}
