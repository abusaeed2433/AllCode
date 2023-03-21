#include<stdio.h>
#include<math.h>
int main(){
	int t;
	long long int a,b,c,d;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&a,&b);
		if(a>=b){
			c=a;
			d=b;
		}
		else{
			d=a;
			c=b;
		}
		long long int count=0;
		while(c>d&&c%2==0){
			c/=2;
			count++;
		}
		if(c==d){
			printf("%lld\n",(int)(ceil(count/3)) );
		}
		else printf("-1\n");
	}
}