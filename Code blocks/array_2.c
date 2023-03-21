#include<stdio.h>
int main()
{
    int ara[10]={50,60,20,50,40,50,80,90,75,95};
    int ara2[10]={99,100,50,70,80,50,70,90,66,77};
    int ara3[10]={100,20,50,94,87,84,70,89,95,70};
    int i,j,k,marks,t1,t2,t3;
    int m,n,o,p;
    for(i=0,j=0,k=0;i<10&&j<10&&k<10;i++,j++,k++)
    {
        t1=ara[i];
        t2=ara2[j];
        t3=ara3[k];
        marks=(t1/4)+(t2/4)+(t3/2);
        printf("marks for roll(%d) = %d\n",i,marks);
    }
    for(m=0;m<=100;m++)
    {
        if(marks[m]==marks)
            n++
        else
            printf("marks[1] = %d",n);
    }
}
