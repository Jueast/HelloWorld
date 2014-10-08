#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define MAXNUM 100
int main(void){
	int i,n,num[MAXNUM],maxn,minn;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);}
	maxn = num[0];minn = num[0];
	for(i=1;i<n;i++){
		maxn = max(maxn,num[i]);
		minn = min(minn,num[i]);
}
	printf("%d %d",maxn,minn);
	return 0;
}
