#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
int A[100],C[100],I[1200],dp[100000];
int main(void){
	int i,j,n,m,k,p,counter;
	while(1){
		scanf("%d%d",&n,&m);
		if(n == 0 && m == 0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		for(i=0;i<n;i++)
			scanf("%d",&C[i]);
		p = 0;
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++){
			for(k=1;k<C[i];k *= 2){
				I[p++] = k * A[i];
				C[i] -= k;
			}
			I[p++] = C[i] * A[i];
		}
		for(i=0;i<p;i++){
			for(j=m;j>=I[i];j--){
				dp[j] = max(dp[j],dp[j-I[i]] + I[i]); 
			}
		}
		counter = 0;
		for(i=1;i<=m;i++){
			if (dp[i] == i ){
				counter ++;
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}
