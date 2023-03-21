#include<stdio.h>
#include<string.h>
int main(){
    char s[11],c='a';
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>=c){
            c=s[i];
        }
        else{
            continue;
        }
    }
    for(i=0;i<strlen(s);i++){
        if(s[i]==c){
            printf("%c",c);
        }
        else{
            continue;
        }
    }
}
