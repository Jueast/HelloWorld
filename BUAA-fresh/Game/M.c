#include <stdio.h>
int h[100050];
int main(void){
	int n,k,i;
	long long int couter,result;
	while(scanf("%d%d",&n,&k) != EOF){
		couter = 0;
		for(i=0;i<n;i++){
			scanf("%d",&h[i]);
		}
		for(i=1;i<n;i++){
			if(h[i-1] != h[i])
				couter++;
		}
		result = k * couter;
		printf("%lld\n",result);
	}
	return 0;
}
