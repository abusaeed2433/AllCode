#include<stdio.h>
#include<math.h>
int main(){
    int n,a,i,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>0){
            x++;
        }
        else if(a<0){
            y++;
        }
        else{
            z++;
        }
    }
    int c;
    c=(int)(ceil((double)n/2));
    if(x>=c){
        printf("1");
    }
    else if(y>=c){
        printf("-1");
    }
    else{
        printf("0");
    }
    return 0;
}
