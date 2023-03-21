#include<stdio.h>

int main()
{

    int t;
    scanf("%d",&t);
    int cas=1;
    while(cas<=t)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int maxm = a>=b ? a>=c ? a:c : b>=c ? b:c;
        int mini = a<=b ? a<=c ? a:c : b<=c ? b:c;
        printf("Case %d: %d\n",cas,a+b+c-maxm-mini);
        cas++;
    }
    return 0;
}
