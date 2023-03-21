#include<stdio.h>
#include<string.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,k,x,counter = 0;
        t--;
        scanf("%d",&n);
        scanf("%d",&k);
        scanf("%d",&x);
        int a =1;
        char s[n+1];
        while (a<=n)
        {
            scanf("%s",s);
            int i = k-1;
            while (i<n)
            {
                if(s[i]=='0') counter++;
                i++;
            }
            a++;
        }
        if(counter<=x) printf("YES\n");
        else printf("NO\n");
    }
}
