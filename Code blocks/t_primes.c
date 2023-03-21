#include<stdio.h>
#include<math.h>
int main(){
    long long int t,i,j,k,n,c;
    scanf("%lld",&t);
    while(t){
        scanf("%lld",&n);
        if(n<=10){
            if(n==4||n==9){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        else{
            c=sqrt(n);
            int z=0;
            if(c*c==n){
                for(i=2;i<(int)(ceil(sqrt(c)))+1;i++){
                    if(c%i==0){
                        z=1;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(z==1){
                    printf("NO");

                }
                else{
                    printf("YES");
                }
            }
            else{
                printf("NO");
            }
        }
        printf("\n");
        t--;
    }
}
