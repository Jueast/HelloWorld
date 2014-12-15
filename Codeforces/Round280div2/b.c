#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?(a):(b))
#define SIZE 1050
int a[SIZE] = {0};
int cmp(const void *a,const void *b);
int main(void){
	int n,l,i,j,big;
	double d;
	scanf("%d%d",&n,&l);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	big = a[0] * 2;
	for(i=1;i<n;i++){
		big = max(big,a[i] - a[i-1]);
	}
	big = max(big,(l-a[n-1]) * 2);
	d = (double)big/2.0;
	printf("%.9f",d);
	//system("pause");
	return 0;
}
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;}
