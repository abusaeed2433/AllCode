#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long int n[t],c;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        if(n[i]==1||n[i]==2)
        {
            printf("0\n");
        }
        else
        {
            if(n[i]%2==1)
            {
                printf("%lld\n",(n[i]/2));
            }
            else
            {
                printf("%lld\n",(n[i]/2)-1);
            }
        }
    }
}
