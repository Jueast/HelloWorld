#include <stdio.h>
int main(void){
	int i,n,m,q;
	int ans = 0;
	scanf("%d%d%d",&n,&m,&q);
	for(i=2;i<=n;i++){
		ans = (ans + m) % i;
	}
	ans = (ans + q) % n;
	printf("%d",ans);
	return 0;
}
	
