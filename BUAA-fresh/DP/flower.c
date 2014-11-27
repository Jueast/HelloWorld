#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
#define SIZE 101
int main(void){
	int window[SIZE][SIZE],F,V,i,j,big,temp,dp[SIZE][SIZE]={0};
	scanf("%d%d",&F,&V);
	for(i=0;i<F;i++){
		for(j=0;j<V;j++){
			scanf("%d",&window[i][j]);
		}
	}
    dp[1][1] = window[0][0];//dp[i][j] means in (i,j)'s answer.
	for(i=0;i<F;i++){
        big = dp[i][i] + window[i][i];
		for(j=i;j<V;j++){//control the range
                 temp = window[i][j] + dp[i][j]; 
                 big = max(big,temp);
		 dp[i+1][j+1] = big ;
            }
		}
	printf("%d",dp[F][V]);
	return 0;
}
