#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Your letter is: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("Given letter is vowel.");
    else
        printf("Given letter is not vower.");
    return 0;
}
