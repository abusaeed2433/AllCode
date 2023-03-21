#include<stdio.h>
#include<math.h>
int main(){
    FILE *f;
    f = fopen("input.txt","r");
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        printf("%lld\n",(long long int)fabs((double)a-b));
    }
    return 0;

}
