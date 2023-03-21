#include<stdio.h>
struct bks{
        int a,b;
        char c;
    };
void display(struct bks *ad){
    printf("%d %d %c\n",ad->a,ad->b,ad->c);
    ad->a = 11;
    ad->b = 21;
    ad->c = 'b';
}
int main(){
    struct bks *ptr,bk,ck;
    bk.a = 10;
    bk.b = 20;
    bk.c = 'a';
    ptr = &bk;
    display(&bk);
    printf("%d %d %c\n",ptr->a,ptr->b,ptr->c);
    return 0;
}

