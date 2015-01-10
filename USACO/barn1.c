/*
ID:eastern3
LANG:C
TASK:barn1
*/
#include <stdio.h>
int cmp(const void  *a,const void *b);
int fcmp(const void  *a,const void *b);
int main(void){
	int M,S,C;
	int pos[205],gap[200];
	int i,result;
	freopen("barn1.in","r",stdin);
	freopen("barn1.out","w",stdout);
	scanf("%d%d%d",&M,&S,&C);
	for(i=0;i<C;i++){
		scanf("%d",&pos[i]);
	}
	qsort(pos,C,sizeof(pos[0]),cmp);
	for(i=0;i<C-1;i++){
		gap[i] = pos[i+1] - pos[i]-1;
	}
	qsort(gap,C-1,sizeof(gap[0]),fcmp);
	result = pos[C-1] - pos[0]+1;
	for(i=0;i<M-1&&result != C;i++){// avoid the M>C-1  
		result -= gap[i];
	}
	printf("%d\n",result);
	return 0;
}
int fcmp(const void  *a,const void *b){
	return -*(int *)a + *(int *)b;
}
int cmp(const void  *a,const void *b){
	return *(int *)a - *(int *)b;
}	
