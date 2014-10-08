#include <stdio.h>
int main(void){
	int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};//question:why not monthdays[11]?
	int year,month,day,i,total=0;
	scanf("%d %d %d",&year,&month,&day);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		monthdays[1] = 29;
	for(i=0;i<month - 1;i++){
		total += monthdays[i];
	}
	printf("%d\n",total + day);
	return 0;
}

