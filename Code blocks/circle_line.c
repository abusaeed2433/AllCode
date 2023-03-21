#include<stdio.h>
#include<math.h>
int main(){
int n,i,j,s,t,x;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d%d",&s,&t);
s=s-1;
t=t-1;
int c,d;
c=(s>=t)?s:t;
d=(s>=t)?t:s;
int d1=0;
for(i=d;i<c;i++){
    d1=d1+a[i];
}
int d2=0;
for(i=0;i<d;i++){
    d2=d2+a[i];
}
for(i=c;i<n;i++)
{
    d2=d2+a[i];
}
d1=(d1>=d2)?d2:d1;
printf("%d",d1);
return 0;
}
