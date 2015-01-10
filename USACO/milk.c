/*
ID:eastern3
LANG:C
TASK:milk
*/
#include <stdio.h>
#define PEOPLE struct people
PEOPLE{
	int cost;
	int amt;
};
int fcmp(const void *a,const void *b);
int main(void){
	PEOPLE farmer[5005];
	int i,N,M,result=0;
	freopen("milk.in","r",stdin);
	freopen("milk.out","w",stdout);
	scanf("%d %d",&N,&M);
	for(i=0;i<M;i++)
		scanf("%d %d",&farmer[i].cost,&farmer[i].amt);
	qsort(farmer,M,sizeof(PEOPLE),fcmp);i=0;
        while(N>0){
		result += farmer[i].cost * farmer[i].amt;
		N -= farmer[i++].amt;
	}
	i -= 1;
	result += farmer[i].cost * N;
	printf("%d\n",result);
	return 0;
}	
int fcmp(const void *a,const void *b){
	PEOPLE *c = (PEOPLE *)a;
        PEOPLE *d = (PEOPLE *)b;
	return 	c->cost - d->cost;
}
