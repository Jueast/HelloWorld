#include <stdio.h>
int mark[11] = {0};
int stack[11];
void dps(int N,int n);
int main(void){
	int N;
	scanf("%d",&N);
	dps(N,1);
	//system("pause");
	return 0;
}
void dps(int N,int n){
    int i;
	if(n == N+1){
         for(i=1;i<=N;i++)
             printf("%d ",stack[i]);
         printf("\n");
	}
	else{
		for(i=1;i<=N;i++){
			if(mark[i] == 0){
				mark[i] = 1;
				stack[n] = i;
				dps(N,n+1);
				mark[i] = 0;
			}
			
		}
	}
}
