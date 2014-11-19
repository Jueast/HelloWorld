#include <stdio.h>
#include <stdlib.h>
int a[100],b[100],mark[100];
int cmp(const void *a,const void *b);
int main(void){
	int n,m,i,j,counter = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	qsort(b,m
    sizeof(b[0]),cmp);
	for(i=0;i<n;i++){
          for(j=0;j<m;j++){
              if(b[j]-1 <= a[i] && a[i] <= b[j] + 1 && mark[j] == 0){
                         counter++;
                         mark[j] = 1;
                         break;
                         }
    }
}
    printf("%d",counter);
    //system("pause");
	return 0;

}
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;}

