#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[n],len=0;
    for(int i=0;i<n;i++){
        int isMatched = 0;
        for(int j=0;j<len;j++){
            if(arr[i]==ans[j]){
                isMatched=1;
                break;
            }
        }
        if(!isMatched){
            ans[len]=arr[i];
            len++;
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
