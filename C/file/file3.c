#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    ptr = fopen("sample2.txt","r");
    if(ptr==NULL){
        return 0;
    }
    else{
        char str[60];
        fgets(str,2,ptr);
        puts(str);
        fclose(ptr);
    }
    return 0;
}
