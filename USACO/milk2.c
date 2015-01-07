/*
ID:eastern3
LANG:C
TASK:milk2
*/
#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
typedef struct{
	int begin;
	int end;
} people;
people farmer[5005];
int fcmp(const void *a,const void *b);
int main(void){
	int N,i,mlen,blank,end,len;
	freopen("milk2.in","r",stdin);
	freopen("milk2.out","w",stdout);
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d%d",&farmer[i].begin,&farmer[i].end);
	}
	qsort(farmer,N,sizeof(farmer[0]),fcmp);
	mlen = len = farmer[0].end - farmer[0].begin;
	end = farmer[0].end;
	blank = 0;
	for(i=1;i<N;i++){
		if (farmer[i].begin > end){
			blank = max(blank,farmer[i].begin - end);
			mlen = max(mlen,len);
			len = farmer[i].end - farmer[i].begin;
			end = farmer[i].end;
		}
		else if(end < farmer[i].end){
				   len += farmer[i].end - end;
				   mlen = max(mlen,len);
				   end = farmer[i].end;
		}
	}
	printf("%d %d\n",mlen,blank);
	return 0;
}


int fcmp(const void *a,const void *b){
	people *c,*d;
	c = (people *)a;
	d = (people *)b;
	return (c->begin - d->begin);
}
