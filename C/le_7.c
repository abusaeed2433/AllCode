#include<stdio.h>

int main(){
    int r,c;
    printf("Enter number of row = ");
    scanf("%d",&r);

    printf("Enter number of colunm = ");
    scanf("%d",&c);
    int arr[r][c];
    long long int rs[r],cs[c],ds[2]={0},highest=0;

    for(int i=0;i<r;i++) rs[i]=0;
    for(int i=0;i<c;i++) cs[i]=0;


    printf("Enter your %d * %d matrix:\n",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            rs[i]+=arr[i][j];
            cs[j]+=arr[i][j];

            if(r==c && i==j)       ds[0]+=arr[i][j];
            if(r==c && i+j == r-1) ds[1]+=arr[i][j];
        }
    }

    for(int i=0;i<r;i++) highest = highest>rs[i]?highest:rs[i];
    for(int i=0;i<c;i++) highest = highest>cs[i]?highest:cs[i];

    int hdig = 0; //highest digit
    while(highest!=0){
        highest/=10;
        hdig++;
    }


    printf("ROW SUM AND COLUMN SUM\n\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%*d",hdig+3,arr[i][j]);
        }
        printf(" - - %*lld (row_%d)\n",hdig+2,rs[i],i+1);
    }
    for(int i=0;i<c;i++) printf("%*c",hdig+3,45);
    printf("\n");

    for(int i=0;i<c;i++){
        printf("%*lld",hdig+3,cs[i]);
    }
    printf("  < - - column sum\n");

    if(r!=c) printf("\nNO DIAGONAL FOUND. Since Row != Column\n");
    else printf("\nSum of diagonal-1 = %lld\nSum of diagonal-2 = %lld\n",ds[0],ds[1]);

    return 0;
}
