#include<stdio.h>


int main(){

    FILE *ptr = fopen("test.txt","rb");
    if(ptr==NULL){
        perror("Error");
    }
    else{
        char ch;
        while(!feof(ptr)){
            ch = getc(ptr);
            printf("%c",ch);
        }
        printf("\nRead successful");
    }
    return 0;

}
