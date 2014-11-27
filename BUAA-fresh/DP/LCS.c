#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b?(a):(b))
#define SIZE 400
int main(void){
	char a[SIZE],b[SIZE];
	int dp[SIZE][SIZE] = {0};
	int i,j;
	while(scanf("%s %s",a,b) != EOF){
        memset(dp,0,sizeof(dp));
		for(i=0;i<strlen(a);i++){
			for(j=0;j<strlen(b);j++){
				if(a[i] == b[j])
					dp[i+1][j+1] = dp[i][j] +1;
				else
					dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
			}
		}
		printf("%d\n",dp[strlen(a)][strlen(b)]);
	}
	return 0;
}
