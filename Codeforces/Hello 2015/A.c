#include <stdio.h>
long long int a[100050];
int main(void){
	int n,q,i;
	long long int t;
	scanf("%d%d",&n,&q);
	a[0] = 0;
	for(i=1;i<=n;i++){
		scanf("%I64d",&a[i]);
		a[i] += a[i-1];
	}
	while(q--){
		scanf("%I64d",&t);
		t %= a[n];
		printf("%d\n",solve(t,n));
	}
	return 0;
}

int solve(long long int t,int n){
	int l=0,h=n;
	while(h-l > 1){
		if (a[(l+h)/2] == t)
			return (l+h)/2 + 1;
		else if (a[(l+h)/2] > t)
			h = (l+h)/2;
		else 
			l = (l+h)/2;
	}
	return h;
}	
