#include <stdio.h>
int main(void){
	int x,i = 1,j,state = 0,n,temp;
	scanf("%d",&x);
	for(i=1;i<(x/2 + 1);i++){
		temp = x;
		j = i;
		n = 0;
		while(temp > 0){//try to decrease the num to zero
			n++;
			temp -= j;
			j++;
		}
		if(temp == 0){// judge whether we succeed or not
			state = 1;
			break;
		}		
	}
	if(state){
		printf("%d=%d",x,i);
		for(j=i+1;j<n+i;j++){
			printf("+%d",j);
		}
	}
	else
		printf("No Answer");
	return 0;
}
			
		
