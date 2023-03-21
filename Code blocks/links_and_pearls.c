#include<stdio.h>
#include<string.h>
int main(){
    int i,x=0,y=0,n;
    char s[101];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='o'){
            y++;
        }
        else{
            x++;
        }
    }
    if(y==1||x==0||y==0){
        printf("YES");
    }
    else if(x%y==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
