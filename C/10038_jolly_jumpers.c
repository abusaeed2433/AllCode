#include<stdio.h>
#include<math.h>
int main(){
    int n,arr[3000],dif[3000],i,j,jolly=1,found=1;
    while(scanf("%d",&n)!=EOF){
        jolly=1;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
            dif[i] = (int)(abs(arr[i+1]-arr[i]));
        }
        for(i=0;i<n-1;i++){
            found = 0;
            for(j=0;j<n-1;j++){
                if(dif[j]==i+1){
                    found = 1;
                    break;
                }
            }
            if(found==0){
                jolly=0;
                break;
            }
        }
        if(jolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
