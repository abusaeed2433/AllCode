#include<stdio.h>
#include<string.h>


int main(){
    char s[101],s2[2]; //s2 must be a character i.e. s2 can't contain more than 1 character
    char *s1;
    printf("Enter the string = ");
    scanf("%s",s);
    printf("Enter where to split = ");
    scanf("%s",s2);
    s1 = strtok(s,s2);
    while(s1!=NULL){
        printf("%s\n",s1);
        s1 = strtok(NULL,s2);
    }

    return 0;
}
