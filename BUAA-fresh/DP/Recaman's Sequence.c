#include <stdio.h>
#define SIZE 500050
int ak[SIZE],mark[10*SIZE];
int main(void){
	int k,i;
	mark[0] = 1;
	while(1){
		scanf("%d",&k);
		if(k == -1)
			break;	
		memset(mark,0,sizeof(mark));
        mark[0] = 1;
		for(i=1;i<=k;i++){
			ak[i] = (ak[i-1] - i)>0 && mark[ak[i-1] - i] == 0?ak[i-1]-i:ak[i-1] + i;
			mark[ak[i]] = 1;
      }
		printf("%d\n",ak[k]);
	}
	return 0;
}	


