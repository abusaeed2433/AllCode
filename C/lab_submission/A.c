//                  CONTEST A
#include<stdio.h>
int main(){
    char str[1001];
    while(gets(str)){
        int i=0,count=0,check=0;
        while(str[i]!='\0'){
            if(str[i]>=65 &&str[i]<=90 || str[i]>=97 && str[i]<=122){
                check=1;
            }
            else{
                if(check){
                    count++;
                    check=0;
                }
            }
            i++;
        }
        if(check) count++;
        printf("%d\n",count);
    }
    return 0;
}
