#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *cnt;
    cnt = (char*) malloc(10);
    strcpy(cnt,"saeed");
    printf("%s\n",cnt);

    cnt = (char*) realloc(cnt,15);

    printf("%s\n",cnt);

    strcpy(cnt,"greatest idiot");

    printf("%s\n",cnt);

    return 0;
}

