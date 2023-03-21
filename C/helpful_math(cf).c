#include<stdio.h>
#include<string.h>


void printPlus(int a,int b,int c){
    if(a+b+c){
        printf("+");
    }
}


int main(){
    char s[101];
    gets(s);
    int a=0,b=0,c=0,i=0;
    while(s[i]!='\0'){
        if(s[i]=='1') a++;
        else if(s[i]=='2') b++;
        else if(s[i]=='3') c++;
        i++;
    }
    while(a+b+c){
        if(a){
            printf("1");
            a--;
            printPlus(a,b,c);
            continue;
        }
        if(b){
            printf("2");
            b--;
            printPlus(a,b,c);
            continue;
        }
        if(c){
            printf("3");
            c--;
            printPlus(a,b,c);
            continue;
        }

    }
    printf("\n");
    return 0;
}
