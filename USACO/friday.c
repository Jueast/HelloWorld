/*
ID:eastern3
LANG:C
TASK:friday
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int days[14] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(void){
	int N,year = 1900,month = 1,cont = 0;
	int result[8],i,j;
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
	scanf("%d",&N);
	memset(result,0,sizeof(result));result[13 % 7] = 1;
	while(year < 1900 + N){
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			days[2] = 29;
		else
			days[2] = 28;
		for(month =(year == 1900)?2:1;month<=12;month++){
			cont += days[(month == 1)?12:month - 1];
			result[(cont + 12) % 7 + 1]++;
		}
		year++;
	}
	for(i=6;i<=12;i++){
		if(i == 12){
		 	 printf("%d\n",result[i>7?i%7:i]);
		 	 continue;
			 }
		printf("%d ",result[i>7?i%7:i]);
	}
	return 0;
}
		        	
