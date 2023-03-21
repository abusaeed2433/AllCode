#include<stdio.h>

int convert(char* arr){
    int i=0;
    int num=0;
    int check = arr[0]=='-';
    if(check) arr[0]='0';
    while(arr[i]!=0){
        num*=10;
        num+=(int)arr[i] - 48;
        i++;
    }

    if(check) num*=-1;
    //printf("%d",num);
    return num-2;
}

void decodeMarks(){

    FILE *ptr = fopen("encode.txt","r");
    FILE *ptr2 = fopen("decode.txt","a");


    char arr[5];
    if(ptr!=NULL)
    {
        while(fgets(arr,5,ptr))
        {
            int i=0;
            while(arr[i]!='\n') i++;
            arr[i]=0;
            fprintf (ptr2, "%d\n", convert(arr)+4);
            //puts(arr);
        }
        fclose(ptr);
        fclose(ptr2);
    }

    printf("Text decoded successfully. Showing decoded number:\n");


    ptr = fopen("decode.txt","r");

    if(ptr!=NULL)
    {
        while(fgets(arr,5,ptr))
        {
            int i=0;
            printf("%s",arr);
        }
        fclose(ptr);
    }

}

int main()
{

    FILE *ptr = fopen("CSE101.txt","r");
    FILE *ptr2 = fopen("encode.txt","a");
    char arr[5];
    if(ptr!=NULL)
    {
        while(fgets(arr,5,ptr))
        {
            int i=0;
            while(arr[i]!='\n') i++;
            arr[i]=0;
            fprintf (ptr2, "%d\n", convert(arr));
            //puts(arr);
        }
        fclose(ptr);
        fclose(ptr2);
    }

    printf("Text encoded successfully\n");

    printf("Decoding text ...\n");
    decodeMarks();
    //Sleep(1);

    return 0;
}
