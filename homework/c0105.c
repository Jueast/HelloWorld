#include <stdio.h>
int main(void){
	int money,n10,n5,n2,n1;
	scanf("%d",&money);
	n10 = money / 10;
	n5 = (money = money - n10 * 10) / 5;
	n2 = (money = money - n5 * 5)/2;
	n1 = money - n2 * 2;
	printf("%d %d %d %d",n10,n5,n2,n1);
	return 0;
}

