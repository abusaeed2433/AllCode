#include<stdio.h>
#include<string.h>
int main(){
char s[101];
int i,x=0;
scanf("%s",s);
for(i=0;i<strlen(s);i++){
    if(s[i]=='0')
    {
        x++;
    }
    else
    {
        if(x>=7){
            break;
        }
        else{
            x=0;
        }
    }
}
if(x>=7){
    printf("YES");
}
else{
    x=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            x++;
        }
        else{
            if(x>=7){
                break;
            }
            else{
                x=0;
            }
        }
    }
    if(x>=7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
return 0;
}
