#include<stdio.h>
int main()
{
    int t,i,b[1001],x;
    char a[1002];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&a);
        x=strlen(a);
        if(a[x-1]=='o')
        {
            b[i]=1;
        }
        else if(a[x-1]=='u')
        {
            b[i]=2;
        }
        else if(a[x-1]=='a')
        {
            b[i]=3;
        }
    }
    for(i=0;i<t;i++)
    {
        if(b[i]==1)
        {
            printf("FILIPINO");
            if(i<(t-1))
            {
                printf("\n");
            }
        }
        else if(b[i]==2)
        {
            printf("JAPANESE");
            if(i<(t-1))
            {
                printf("\n");
            }
        }
        else if(b[i]==3)
        {
            printf("KOREAN");
            if(i<(t-1))
            {
                printf("\n");
            }
        }
    }
}
