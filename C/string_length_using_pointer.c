#include<stdio.h>
#include<string.h>

int findLength(char[]);

int main(){
    char s[101];
    gets(s);
    printf("Length of %s is = %d",s,findLength(s));
    return 0;
}

int findLength(char s[101]){
    char *s1;
    s1 = s; //starting address of given string
    int count = 0;
    while(*s1!='\0'){
        count++;
        s1++; // increasing address by 'char-size' i.e. 1 byte
    }
    return count;
}

