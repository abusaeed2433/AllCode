#include<stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    int ans=0,prev=0;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a==-1&&prev==0){
            ans++;
        }
        else{
            prev+=a;
        }
    }
    printf("%d",ans);
    return 0;
}

