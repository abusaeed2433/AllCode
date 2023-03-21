#include<stdio.h>
int main(){
    char name[100];
    printf("Enter your name[without space and less than 100 characters] : ");
    scanf("%s",name);

    int i=0;
    char plus[100],minus[100];
    while(name[i]!='\0'){
        plus[i] = name[i]+2;
        minus[i] = name[i]-2;
        i++;
    }
    plus[i]='\0';
    minus[i]='\0';
    printf("Your name after shifting 2 letter forward = %s\n",plus);
    printf("Your name after shifting 2 letter backward = %s\n",minus);
    return 0;
}
