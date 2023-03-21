#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+abs(a);
    }
    printf("%d",sum);
    return 0;
}
