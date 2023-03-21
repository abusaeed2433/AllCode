#include<stdio.h>
int main()
{
    int n,k,i,c;
    scanf("%d%d",&n,&k);
    c=n%10;
    for(i=1;i<=10;i++)
    {
        if(((c*i)%10)==k||((c*i)%10)==0)
        {
            printf("%d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
