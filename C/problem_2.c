#include<stdio.h>
#include<string.h>

int main(){
    char arr[21];

    while(gets(arr)){
        int isPrinted=0;
        int len=0;
        while(arr[len]!=0) len++;
        if(len==1){puts(arr); continue;}

        char brr[21];
        int i=0;
        while(i<16-len){
            brr[i]='0';
            i++;
        }
        for(int j=0;j<len;j++){
            brr[i]=arr[j];
            i++;
        }

        if(brr[0]!='0' || brr[1]!='0'){
            isPrinted=1;
            if(brr[0]!='0'){
                printf("%c%c",brr[0],brr[1]);
            }
            else printf("%c",brr[1]);
            printf(" kuti");
        }
        if(brr[2]!='0' || brr[3]!='0')
        {
            if(isPrinted) printf(" ");
            if(brr[2]!='0') printf("%c%c",brr[2],brr[3]);
            else printf("%c",brr[3]);
            printf(" lakh");
            isPrinted=1;
        }
        if(brr[4]!='0' || brr[5]!='0'){
            if(isPrinted) printf(" ");
            if(brr[4]!='0') printf("%c%c",brr[4],brr[5]);
            else printf("%c",brr[5]);
            printf(" hajar");
            isPrinted=1;
        }
        if(brr[6]!='0'){
            if(isPrinted) printf(" ");
            if(brr[6]!='0') printf("%c",brr[6]);
            printf(" shata");
            isPrinted=1;
        }
        if(brr[7]!='0' || brr[8]!='0'){
            if(isPrinted) printf(" ");
            if(brr[7]!='0') printf("%c%c",brr[7],brr[8]);
            else printf("%c",brr[8]);
            printf(" kuti");
            isPrinted=1;
        }
        if(brr[9]!='0' || brr[10]!='0'){
            if(isPrinted) printf(" ");
            if(brr[9]!='0') printf("%c%c",brr[9],brr[10]);
            else printf("%c",brr[10]);
            printf(" lakh");
            isPrinted=1;
        }
        if(brr[11]!='0' || brr[12]!='0'){
            if(isPrinted) printf(" ");
            if(brr[11]!='0') printf("%c%c",brr[11],brr[12]);
            else printf("%c",brr[12]);
            printf(" hajar");
            isPrinted=1;
        }
        if(brr[13]!='0'){
            if(isPrinted) printf(" ");
            if(brr[13]!='0') printf("%c",brr[13]);
            printf(" shata");
            isPrinted=1;
        }
        if(brr[14]!='0' || brr[15]!='0'){
            if(isPrinted) printf(" ");
            if(brr[14]!='0') printf("%c%c",brr[14],brr[15]);
            else printf("%c",brr[15]);
            isPrinted=2;
        }
        printf("\n");

    }
    return 0;
}
