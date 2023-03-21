#include<stdio.h>
#include<string.h>
int main(){
    char s[1001],s1[1001];
    gets(s);
    int k=0;
    if(strlen(s)==2){
        printf("0");
    }
    else{
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='{'&&s[i]!='}'&&s[i]!=','&&s[i]!=' '){
            s1[k]=s[i];
            k++;
        }
    }
    s1[k]='\0';
    for(int j=0;j<strlen(s);j++){
    for(int i=0;i<strlen(s1)-1;i++){
        if(s1[i]<=s1[i+1]){
            continue;
        }
        else{
            char p=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=p;
        }
    }
    }
    int x=0;
    for(int i=0;i<strlen(s1)-1;i++){
        if(s1[i]==s1[i+1]){
            x++;
        }
        else{
            continue;
        }
    }
    printf("%d",strlen(s1)-x);
    }
    return 0;
}
