#include <stdio.h>
int main(void){
	char c,prior,next;
	scanf("%c",&c);
	prior = c - 1;
	next = c + 1;
	printf("%c %c %c\n",prior,c,next);
	printf("%d %d %d\n",prior,c,next);
	return 0;
}
