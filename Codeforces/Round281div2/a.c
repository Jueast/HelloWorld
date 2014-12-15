#include <stdio.h>
int main(void){
	char home[26],away[25],team,color;
	int i,n,state,number[2][100]={0},minute,xnumber;
	scanf("%s",home);
	scanf("%s",away);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %c %d %c",&minute,&team,&xnumber,&color);
		if(team == 'a')
			state = 1;
		else
			state = 0;
		number[state][xnumber] += color == 'y'?1:2;
		if(number[state][xnumber] >= 2){
			printf("%s %d %d\n",state == 0?home:away,xnumber,minute);
			number[state][xnumber] = -999999999;}
	}
	return 0;
}
