#include <stdio.h>
#define SIZE 100
int main(void){
	int a[SIZE],n,k,i,j=0;
	scanf("%d%d",&n,&k);
	for(i = 0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
        if (a[i] >= a[k-1] && a[i] != 0)
           j++;
           }   
	printf("%d",j);
	return 0;
}
