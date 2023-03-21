#include <stdio.h>
int main()
{
    double ex;
    scanf("%lf",&ex);
    int arr[12]= {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    printf("NOTAS:\n");
    int n = ex*100;
    int i;
    for(i=0; i<12; i++)
    {
        if(i==6) printf("MOEDAS:\n");
        if(i<6) printf("%d nota(s) de R$ %.2lf\n",(n/arr[i]),arr[i]/100.0);
        else printf("%d moeda(s) de R$ %.2lf\n",(n/arr[i]),arr[i]/100.0);
        n %= arr[i];
    }
    return 0;
}
