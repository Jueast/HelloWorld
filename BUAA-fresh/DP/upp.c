#include <stdio.h>
int main(void){
	int num[1000],ans[1000] = {0},i,j,N,fin;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	ans[0] = 1;
	for(i=1;i<N;i++){
		ans[i] = 1;
		for(j=0;j<i;j++){
		    if (num[i] > num[j]){
			   ans[i] = ans[i] > ans[j] + 1?ans[i]:ans[j] + 1;}
           }
		}
    fin = 1;
	for(i=0;i<N;i++){
        //printf("%d ",ans[i]);
		fin = fin > ans[i]?fin:ans[i];
	}
	printf("%d",fin);
	return 0;
}	
