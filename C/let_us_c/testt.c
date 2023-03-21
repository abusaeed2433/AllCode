#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    while (t>0)
    {
        t--;
        long long int l,r,a;
        scanf("%lld",&l);
        scanf("%lld",&r);
        scanf("%lld",&a);
        long long int ans = r/a + r%a;
        long long int lst = a-1 > l ? a-1 : l;
        while (r>=lst)
        {
            long long int val = r/a + r%a;
            ans = ans > val ? ans : val;
            r--;
        }
        printf("%lld\n",ans);
    }

}
