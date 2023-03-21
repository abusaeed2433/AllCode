#include<stdio.h>
int main()
{
    int n,i,t,a[7],u,v,w,x,y,z;
    char b[6];
    scanf("%d",&t);
    u=0;v=0;w=0;x=0;y=0;z=0;
    for(i=0;i<t;i++)
    {
        scanf("%s",&b);
            if(b[0]=='p')
            {
                u=1;
            }
            else if(b[0]=='g')
            {
                v=1;
            }
            else if(b[0]=='b')
            {
                w=1;
            }
            else if(b[0]=='o')
            {
                x=1;
            }
            else if(b[0]=='r')
            {
                y=1;
            }
            else if(b[0]=='y')
            {
                z=1;
            }
    }
        printf("%d\n",(6-t));
            if(u==0)
            {
                printf("Power\n");
            }
            if(v==0)
            {
                printf("Time\n");
            }
            if(w==0)
            {
                printf("Space\n");
            }
            if(x==0)
            {
                printf("Soul\n");
            }
            if(y==0)
            {
                printf("Reality\n");
            }
            if(z==0)
            {
                printf("Mind\n");
            }
    return 0;
}
