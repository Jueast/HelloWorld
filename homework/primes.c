#include <stdio.h>
#define MAXN 100
int main(void){
	int number,pointer = 2,i = 0,n = 0;
	int factor[MAXN];
	scanf("%d",&number);
	while (pointer * pointer <= number){
		if (number % pointer == 0){
			factor[n] = pointer;
			n++;
			number /= pointer;
			}
		else
			pointer++;
	}
	factor[n] = number;
	for(i = 0;i<=n;i++){
		printf("%d ",factor[i]);
	}
	system("pause");
	return 0;
} 
