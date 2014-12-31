#include <stdio.h>
#define min(a,b) (a>b?(b):(a))
int main(void){
	int result,rank,i,N,K,M;
	scanf("%d",&N);
	result = 0;
	for(i=0;i<N;i++){
		scanf("%d%d",&K,&M);
		result += K*M;
	}
	rank = 1;
	for(i = 2;result>=0;i++){
		result -= i * i;
		if (result >= 0) rank++;
	}
	printf("Team Liserious' rank is %d\n",min(rank,99));
	//system("pause");
	return 0;
}
