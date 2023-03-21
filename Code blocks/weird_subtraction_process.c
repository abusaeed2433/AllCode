#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    while(a!=0&&b!=0){
        if(a>=(b+b)){
            a=a-floor(a/b)*b;
        }
        else if(b>=(a+a)){
            b=b-floor(b/a)*a;
        }
        else{
            break;
        }
    }
    printf("%lld %lld",a,b);
    return 0;
}
