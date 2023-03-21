#include<stdio.h>

int main(){
    int n,a;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        int row[n],col[n];
        for(int i=0;i<n;i++){row[i]=0;col[i]=0;}
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a);
                col[j]+=a;
                row[i]+=a;
            }
        }
        int c1=0,c2=0;
        int r,c;
        for(int i=0;i<n;i++){
            if(row[i]%2==1){
                c1++;
                r=i+1;
            }
            if(col[i]%2==1){
                c2++;
                c=i+1;
            }
        }

        if(!(c1+c2)){
            printf("OK\n");
        }
        else if(c1==1 && c2==1){
            printf("Change bit (%d,%d)\n",r,c);
        }
        else{
            printf("Corrupt\n");
        }

    }
    return 0;
}
