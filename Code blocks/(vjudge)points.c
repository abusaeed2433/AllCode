#include<stdio.h>
def position(n,arr[n],a){
	l=0;
	u=n-1;
	while(l<=u){
		mid=(int)((l+u)/2);
		if(arr[mid]==a) return mid+1;
		else if(arr[mid]<a) l=mid+1;
		else{
			if(mid==0) return 1;
			else if(arr[mid-1]<a) return mid+1;
			else u=mid;
		}
	}
}

int main(){
	int t,n,q,a,b;
	scanf("%d",&t);
	for(int p=0;p<t;p++){
		scanf("%d%d",&n,&q);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		printf("Case %d:\n",p+1 );
		while(q--){
			int ip,fp;
			scanf("%d%d",&a,&b);
			if(a<arr[0]) ip=0;
			else ip=position(n,arr,a);
			if(b>arr[n-1]) fp=n-1;
			else fp=position(n,arr,b);
			printf("%d\n",fp-ip+1);
		}
	}
}