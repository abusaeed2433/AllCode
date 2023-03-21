#include<stdio.h>
#include<string.h>
int main(){
    char s[51],x[51],a[51];
    int n,i,j,y=0,d,k;
    scanf("%s",s);
    n=strlen(s);
    // assigning the value of s into x and a//
    for(i=0;i<n;i++){
        x[i]=s[i];
        a[i]=s[i];
    }
    x[n]='\0';//ending string
    a[n]='\0';
    for(i=0;i<n;i++){
        y++;
        int z=0;
        //shifting last value to first value//
        char p=a[n-1];
        for(j=1;j<n;j++){
            x[j]=a[j-1];
        }
        x[0]=p;
        for(k=0;k<n;k++){
            a[k]=x[k];
        }
        //shifting completed//
        z=strcmp(s,x);//comparing s and x//
        if(z==0){
            printf("%d",y);
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}
