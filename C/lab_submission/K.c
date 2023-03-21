//                  CONTEST K
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    long long int a=1;
    for(int i=0;i<n;i++){
        a*=2;
    }
    printf("%lld\n",2*(a-1));
    return 0;
}
