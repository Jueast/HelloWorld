#include <stdio.h>
#define SIZE 100050
int a[SIZE],b[SIZE],flags[SIZE];
int cmp(const void *a,const void *k);
int main(void){
	int n,r,i,m;
	long long int sum = 0;
	long long int essay = 0,avg;
	scanf("%d%d%I64d",&n,&r,&avg);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		flags[i] = i;
		sum += a[i];
	}
	qsort(flags,n,sizeof(flags[0]),cmp);
	sum = avg * n - sum;
	for(i=0;sum>0;i++){
            m = r-a[flags[i]]>sum?sum:r-a[flags[i]];
			sum -= m;
			essay += (long long int)b[flags[i]] * m;
		}
	printf("%I64d",essay);
	//system("pause");
	return 0;
}

int cmp(const void *a,const void *k){
	return b[*(int *)a] - b[*(int *)k];}
