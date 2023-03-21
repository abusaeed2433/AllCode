#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *ptr;
    ptr = fopen("abc/input.txt","r");
    if(ptr==NULL){
        printf("No such file found\n");
    }
    else{
        printf("File opened successfully\nChanging text...\n");
        char c;
        c = getc(ptr);
        while(c!=EOF){
            putchar(c);
            c = getc(ptr);
        }
    }
    fclose(ptr);
    return 0;
}
