#include<stdio.h>

int main(){
    char a[21],b[21],c[21],d[101];
    int age;
    gets(d);
    sscanf(d,"%s%s%s%d",a,b,c,&age);
    printf("%s %s %s = %d\n",a,b,c,age);
    return 0;
}
