#include<stdio.h>

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    int carry=0,count=0;

    while(a>0 || b>0){
        if((a%10 + b%10 + carry)>9){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        a/=10;
        b/=10;
    }
    if(count==0){
        printf("No carry operation.\n");
    }
    else if(count==1){
        printf("1 carry operation.\n");
    }
    else{
        printf("%d carry operations.\n",count);
    }

    return 0;
}
