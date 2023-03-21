#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    gets(s);
    int count=0,i=0;
    while(s[i]!='\0'){
        if(s[i]=='4'||s[i]=='7'){
            count++;
        }
        i++;
    }
    count==4 || count==7 ? printf("YES\n"):printf("NO\n");

    return 0;
}
