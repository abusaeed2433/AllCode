#include<stdio.h>

int main(){
    int b[3],g[3],c[3];
    char s[][4] = {"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(scanf("%d %d %d %d %d %d %d %d %d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])==9){
        int ans[6];
        for(int i=0;i<3;i++){
            int t1=(i+1)%3,t2=(i+2)%3;
            if(t1>t2){
                t1 = t1+t2;
                t2 = t1 - t2;
                t1 = t1 - t2;
            }
            ans[2*i +1] = b[(i+1)%3] + b[(i+2)%3] + g[(t1+1)%3] + g[(t1+2)%3] + c[(t2+1)%3] + c[(t2+2)%3];
            ans[2*i] = b[(i+1)%3] + b[(i+2)%3] + c[(t1+1)%3] + c[(t1+2)%3] + g[(t2+1)%3] + g[(t2+2)%3];
        }
        int index=0,mini = ans[0];
        for(int k=1;k<6;k++){
            if(ans[k]<mini){
                mini = ans[k];
                index = k;
            }
        }
        printf("%s %d\n",s[index],mini);

    }
    return 0;
}
