#include<stdio.h>
#include<string.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    if(ptr==NULL){
        printf("No such file found\n");
    }
    else{
        printf("File opened. Reading character...\n");
        FILE *ptr2 = fopen("sample2.txt","a");
        char c =getc(ptr);
        while(c!=EOF){
            printf("%c\n",c);
            putc(c-' ',ptr2);
            c = getc(ptr);
        }
        fclose(ptr);
        fclose(ptr2);
        ptr2 = fopen("sample2.txt","r+");
        printf("Reading from sample2.txt\n");
        c = getc(ptr2);
        while(c!=EOF){
            printf("%c\n",c);
            c = getc(ptr2);
        }
    }
    return 0;
}
