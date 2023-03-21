#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        char a[20],b[20];
        scanf("%s",a);
        scanf("%s",b);
        int cmp = strcmp(a,b);
        if(cmp==0){
            printf("%s = %s\n%s\n%s\n%d\n",a,b,a,b,cmp);
        }
        else if(cmp<0){
            printf("%s < %s\n%s\n%s\n%d\n",a,b,a,b,cmp);
        }
        else if(cmp>0){
            printf("%s > %s\n%s\n%s\n%d\n",a,b,a,b,cmp);
        }

    }
    return 0;
}
