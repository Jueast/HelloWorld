#include <stdio.h>
int main(void){
		int n,i,j;
		scanf("%d",&n);
		for(i=0;n>=0;i++)
			n -= (1+i+1)*(i+1)/2;
		printf("%d",i-1);
		//system("pause");
		return 0;
}
