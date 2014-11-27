#include <stdio.h>
#define max(a,b) ((a>b)?(a):(b))
int main(void){
	int i,j,tri[101][101]={0},N,ans[101][101]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			scanf("%d",&tri[i][j]);
		}
	}
	for(j=0;j<N;j++)                     //init 
		ans[N-1][j] = tri[N-1][j];
	for(i=N-2;i>=0;i--){
		for(j=0;j<=i;j++){
		ans[i][j] = tri[i][j] + max(ans[i+1][j],ans[i+1][j+1]);
		}
	}
	printf("%d",ans[0][0]);
	system("pause");
	return 0;
} 
