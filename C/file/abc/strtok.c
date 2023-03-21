#include<stdio.h>
#include<string.h>

int main(){

    char str[]= "aaa";
    char fnd[] = "aa";

    int counter = 0;

    for(int i=0;i<strlen(str);i++){

        int isFound = 1;
        for(int j=i;j<i+strlen(fnd) && j<strlen(str);j++){
            if(str[j]!=fnd[j-i]){
                isFound = 0;
                break;
            }
        }
        if(isFound) counter++;

    }

    printf("Counter -> %d\n",counter);
    return 0;
}
