#include<stdio.h>
#include<math.h>
int main(){
    int n,arr[3000],dif[6001],i,jolly=1;
    while(scanf("%d",&n)!=EOF){
        jolly=1;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
            dif[(int)(abs(arr[i+1]-arr[i]))]=1;
        }
        for(i=1;i<n;i++){
            if(dif[i]!=1){
                jolly = 0;
                break;
            }
        }
        if(jolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}

