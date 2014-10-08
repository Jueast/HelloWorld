#include <stdio.h>
int main(void){
	int num,a,b,i,j,state;
	scanf("%d",&num);
	state = 0;
	for(i=1;i<10;i++){
		for(j=9;i<j;j--){
			if ((i*10 + j)*(j*10 +i) == num){
				a = i;
				b = j;
				state = 1;
				break;
			}
		}
	}
	if (state)
		printf("%d%d",a,b);
	else
		printf("No Answer");
	return 0;
}
