#include<stdio.h>
#include<string.h>
int main(){

    int n,count=0,pTaken=0,i=0;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    while(i<n-1){
        int c1 = s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y';
        int c2 = s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y';
        if(c1 != c2 && !pTaken){
            count+=1;
            pTaken = 1;
        }
        else{
            pTaken = 0;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;

}
