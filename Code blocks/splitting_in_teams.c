#include<stdio.h>
int main(){
    int t,a,x=0,y=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a);
        if(a==1){
            y++;
        }
        else{
            x++;
        }
    }
    if(x==0){
        printf("%d",y/3);
    }
    else if(y==0){
        printf("0");
    }
    else if(x>=y){
        printf("%d",y);
    }
    else{
        printf("%d",(x+((y-x)/3)));
    }
    return 0;
}
