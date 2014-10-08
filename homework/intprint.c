#include <stdio.h>
#define MAXN 4
int main(void){
	char num[MAXN] = {'.'};
	int i,n=0;
	scanf("%s",num);
	for(i=0;i<=MAXN;i++){
		if (!('0' <= num[i] && num[i] <= '9')){
			n = i ;
			break;
		}
	}
	printf("%d\n",n);
	for(i = 0; i < n; i++){
		printf("%c",num[i]);
	}
	printf("\n");
	for(i = n - 1; i > -1; i--){
		printf("%c",num[i]);
	}
	printf("\n");
	return 0;
}
