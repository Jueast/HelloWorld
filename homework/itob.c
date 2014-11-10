#include <stdio.h>
int main(void){
	int n,b,i=0,temp,j,state=0;
	char change[1000];
	scanf("%d%d",&n,&b);
	if (n<0)
	   state = 1,n=-n;
	while(1){
		temp = n % b;
		if ( 0<=temp && temp <=9)
			change[i] = temp + '0';
		else
		   	change[i] = temp -10 + 'a';
		if ((n/b) == 0)
			break;
		else
			n = n/b;
			i++;
	}
	if(state)
	         printf("-");
	for(j=i;j>=0;j--){
		printf("%c",change[j]);
	}
	printf("\n");
	//system("pause");
	return 0;
}
