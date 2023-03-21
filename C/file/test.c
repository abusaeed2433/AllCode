#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr = fopen("test.txt","r+");
    if(ptr!=NULL){
        fputs("File opened",ptr);
        printf("'File opened' added to 'test.txt'. Check your 'test.txt'\n");
    }
    else{
        printf("No such file found\n");
    }
    fclose(ptr);
    return 0;
}
