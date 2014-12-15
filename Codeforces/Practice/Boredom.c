#include <stdio.h>
#define SIZE 100050
#define max(a,b) (a>b?(a):(b))
int main(void){
	long long int num[SIZE]={0},n,temp;
	long long int dp[SIZE][2];
	long long int i;
	memset(dp,0,sizeof(dp));
	scanf("%I64d",&n);
	for(i=0;i<n;i++){
		scanf("%I64d",&temp);
        num[temp]++;}
	dp[1][0] = 0;
	dp[1][1] = num[1] * 1;
	for(i=2;i<=100000;i++){
		dp[i][0] = max(dp[i-1][1],dp[i-1][0]);
		dp[i][1] = dp[i-1][0] + num[i] * i;
	}
	printf("%I64d\n",dp[100000][0]>dp[100000][1]?dp[100000][0]:dp[100000][1]);
	//system("pause");      
	return 0;
}
