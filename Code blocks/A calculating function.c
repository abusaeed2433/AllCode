#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,e,f,g,s,t;
    printf("Problem: https://codeforces.com/problemset/problem/486/A \n");
    again:
    printf("Enter your number=");
    scanf("%d",&n);
    if(n%2==0)
    {
        a=n/2;
        b=pow(a,2);
        c=-b;
        d=a+1;
        e=a*d;
        s=c+e;
        printf("According to the function,\nSum of those number is=%d",s);
    }
    else
    {
        a=n/2;
        b=a+1;
        c=a;
        d=pow(b,2);
        e=-d;
        f=c+1;
        g=c*f;
        s=e+g;
        printf("According to the function,\nSum if those number is=%d",s);
    }
    printf("\nTry again???\n1.YES(type1)\n2.NO(type2)\n");
    scanf("%d",&t);
    if(t==1)
    {
        goto again;
    }
    else if(t==2)
    {
        return 0;
    }
    else
    printf("\nType only 1 or 2.");
return 0;
}
