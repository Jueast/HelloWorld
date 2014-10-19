#include <stdio.h>
#define MAXN 100
int main(void){
	int x,temp,n=0,a[MAXN],i;
	scanf("%d",&x);
	temp = x;
	while(1){
		a[n] = temp % 10;
		if ((temp /= 10) != 0)
			n++;
		else
			break;
}
	temp = 0;
	for(i=0;i<=n;i++){
		temp = temp*10 + a[i];
	}
	if (isPrimenum(x) && isPrimenum(temp))
		printf("yes");
	else
		printf("no");
	return 0;
}
		

int isPrimenum(x){
	int i;
	for(i = 2;i<x;i++){
		if (x%i == 0)
			return 0;
	}
	return 1;
}

	
