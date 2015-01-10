#include <stdio.h>
long long int f[100050];
long long int x[100050];
int main(void){
	int n,q,i,a,b,l,r;
	scanf("%d%d",&n,&q);
	scanf("%I64d%I64d",&f[1],&f[2]);
	scanf("%d%d",&a,&b);
	for(i=3;i<=n;i++){
		f[i] = (a * f[i-2] + b*f[i-1]) % 1000000007;
	}
	for(i=1;i<=n;i++){
		scanf("%I64d",&x[i]);
	}
	while(q--){
		scanf("%d%d",&l,&r);
		for(i=l;i<=r;i++){
						 x[i] = (f[i-l+1] + x[i] ) % 1000000007;
						 }
	}
	for(i=1;i<=n;i++){
		printf("%I64d ",x[i]);
	}
	return 0;
}

	
