#include <stdio.h>
int main(void){
	int num5,num2,N,total,temp;
	scanf("%d",&N);
	N *= 100;
	total = 0;
	for(num5 = 0;num5 * 5 <= N;num5 ++ ){
		temp = (N - num5 * 5)/2;
		total += temp + 1;
	}
	printf("%d",total);
	return 0;
}
