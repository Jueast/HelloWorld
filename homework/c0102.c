#include <stdio.h>
int main(void){
	int num,renum;
	scanf("%d",&num);
	if ((int)num / 100> 0 && (int)num/1000 == 0){
		renum = (num % 10) * 100 + (num % 100) - num % 10 + num / 100;}
	else
		renum = -1;
	printf("%d",renum);
	return 0;
}	


