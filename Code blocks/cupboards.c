#include<stdio.h>
int main()
{
    int n,i,j,l1=0,l=0,r1=0,r=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0){
            l++;
        }
        else{
            l1++;
        }
        if(b==0){
            r++;
        }
        else{
            r1++;
        }
    }
    r=(r>=r1)?r1:r;
    l=(l>=l1)?l1:l;
    printf("%d",(l+r));
    return 0;
}
