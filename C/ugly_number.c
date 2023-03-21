#include<stdio.h>

int main(){
    int i=1,j=1,k=1,count=1;
    int arr[1500]={1};
    while(count<1500){
        int t1=arr[i-1]*2,t2=arr[j-1]*3,t3=arr[k-1]*5;
        int temp = (t1<=t2 && t1<=t3) ? t1: (t2<=t1 && t2<=t3)? t2:t3;
        if(temp == arr[count-1]){
            arr[count-1]==t1 ? i++: arr[count-1]==t2 ? j++:k++;
        }
        else{
            arr[count] = temp;
            arr[count]==t1 ? i++: arr[count]==t2 ? j++:k++;
            count++;
        }

    }
    printf("The 1500'th ugly number is %d.\n",arr[1500-1]);
    return 0;
}
