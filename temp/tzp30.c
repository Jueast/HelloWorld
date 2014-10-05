#include <stdio.h>
#define MAXNUM 20
long int num[MAXNUM];
int n,k; 
int main(void){
    int i; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	scanf("%d",&k);
	if (dfs(0,0,num,n,k)) 
		printf("YES.");
	else
		printf("NO.");
}
int dfs(int j,int sum){
	if (j == n) return sum == k;
	if (dfs(j + 1,sum)) return 1;
	if (dfs(j + 1,sum + num[j])) return 1;
	return 0;
}

	
