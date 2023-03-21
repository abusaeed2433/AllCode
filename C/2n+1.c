#include<stdio.h>
int main(){
    int i,j,n;
    while(scanf("%d %d",&i,&j) == 2){
        int max=0;
        printf("%d %d ",i,j);
        if(i>j){
            int temp = i;
            i = j;
            j = temp;
        }
        while(i<=j){
            n = i;
            int ans=1;
            while(n!=1){
                n = n%2==0 ? n/2 : 3*n+1;
                ans++;
            }
            i++;

            max = ans>max? ans:max;
        }
        printf("%d\n",max);
    }
}
