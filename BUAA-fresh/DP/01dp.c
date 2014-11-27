#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
int dp[13000],W[3500],D[3500];
int main(void){
	int N,M,i,j,ans;
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%d%d",&W[i],&D[i]);
	}
	for(i=0;i<N;i++){
		for(j=M;j>=W[i];j--){
			dp[j] = max(dp[j],dp[j-W[i]] +D[i]);
		}
	}
	printf("%d",dp[M]);
	return 0;
}

