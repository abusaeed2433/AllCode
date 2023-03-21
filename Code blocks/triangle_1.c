#include<stdio.h>
#include<math.h>
int main(){
	int t;
	double ab,ac,bc,r,ans;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
		ans=ab*(sqrt(r/(r+1)));
		printf("Case %d: %.12f",i+1,ans);
	}
}