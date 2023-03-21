#include<stdio.h>

int main(){

    char arr[]= {'.','$','#','[',']','/','%'};
    int pos[7];
    for(int i=0;i<128;i++){
        printf("%d - - > %c\n",i,i);
        for(int j=0;j<7;j++){
            if((int)arr[j]==i){
                pos[j]=i;
            }
        }
    }

    printf("\n\n");
    for(int i=0;i<7;i++) printf("%c -- > %d\n",arr[i],pos[i]);
    return 0;
}
