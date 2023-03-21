#include<stdio.h>
int main()
{
    char a,b,c,d;
    printf("Your letter is:");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        printf("Given letter is a small letter.");
    else if(a>='A' && a<='Z')
        printf("Given letter is a capital letter.");
    else
        printf("Letter must be between a to z or A to Z");
    return 0;
}
