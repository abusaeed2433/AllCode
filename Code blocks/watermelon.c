#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    again:
    printf("Weight of watermelon(in kg) is=");
    scanf("%d",&a);
    if(a!=2)
    {
            if(a<=100)
    {
    if(a<=0)
    {
        printf("Have you ever seen negative(-) or zero(0) mass???");
    }
    else
    {
        if(a%2==0)
        {
            b=a/2;
            if(b%2==0)
            {
                b=a/2;
                printf("You can divide the watermelon in two equal parts.\nMass of each parts will be %d kg", b);
            }
            else
            {
                c=b+1;
                d=b-1;
                printf("You can divide the watermelon in two EVEN parts. Weight of\nOne part=%d kg and\nAnother part=%d kg",c,d);
            }
        }
        else
        {
            printf("It is not possible to divide the watermelon in two EVEN parts.");
        }
    }
    }
    else
        {
            printf("Watermelon weight should not exceed 100kg");
        }
    label:
    printf("\nWant to try again???\n1.YES(type 1)\n2.NO(type 2)\n");
    scanf("%d",&e);
    if(e==2)
    return 0;
    else if(e==1)
    goto again;
    else
    {
        printf("Type only 1 or 2");
        goto label;
    }

    }
    else
    {
        printf("You cannot devide the watermelon in two parts.");
        goto label;


    }

}
