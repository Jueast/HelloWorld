#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
int dp[110000];
int main(void){
	int i,j,k,N,D[10000],n[10],m,temp[10],p;
	while(scanf("%d%d",&m,&N) != EOF){
		for(i=0;i<N;i++)
			scanf("%d%d",&n[i],&temp[i]);
	    p=0;
		for(i=0;i<N;i++){
                for(k=1;k<n[i];k *= 2){
                      D[p++] = temp[i] * k;
                      n[i] -= k;
                }
                D[p++] = (n[i]) * temp[i];
        }
		memset(dp,0,sizeof(dp));
		for(i=0;i<p;i++){
            for(j=m;j>=D[i];j--){
                 dp[j] = max(dp[j],dp[j-D[i]] + D[i]);
                 }
                 }
		printf("%d\n",dp[m]);
	}
	return 0;
}
	 
