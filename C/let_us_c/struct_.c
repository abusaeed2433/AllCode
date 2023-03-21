#include<stdio.h>
#include<string.h>


typedef struct{
    char *a,*b,*c;
} colors;

colors temp(colors sample){
    sample.a = "cyan";
    sample.b = "magenta";
    sample.c = "yellow";
    printf("%s %s %s\n",sample.a,sample.b,sample.c);
    return sample;
}

int main(){

    static colors sample = {"red","green","blue"};
    printf("%s %s %s\n",sample.a,sample.b,sample.c);

    sample = temp(sample);

    printf("%s %s %s\n",sample.a,sample.b,sample.c);

    return 0;
}
