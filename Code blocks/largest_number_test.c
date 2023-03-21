#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],i,j,temp;
    int n;
    scanf("%s",&a);
    n=strlen(a);

 for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j=j+2)
        {
            if(a[j]>=a[j+2])
            {
            temp=a[j];
            a[j]=a[j+2];
            a[j+2]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<n;i=i+2)
    {
        printf("%c",a[i]);
        if(i==(n-1))
            continue;
        else
        printf("+");
    }
}
