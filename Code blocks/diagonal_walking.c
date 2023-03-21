#include<stdio.h>
int main(){
    int t,i,x=0;
    scanf("%d",&t);
    char s[t+1];
    scanf("%s",s);
    for(i=0;i<t-1;i++){
        if(s[i]=='U'){
            if(s[i+1]=='R'){
                x++;
                i++;
            }
            else{
                continue;
            }
        }
        else{
            if(s[i+1]=='U'){
                x++;
                i++;
            }
            else{
                    continue;
            }
        }
    }
    printf("%d",(t-x));
    return 0;
}

