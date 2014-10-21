#include <stdio.h>
#define MAXN 100
int a[MAXN]={0},b[MAXN]={0},c[MAXN];
int main(void){
	int m=1,n=1,i,j,state,p = 0;
	while(a[m-1] != -1){//input the date
		scanf("%d",&a[m]);
		m++;
	}
	/* for(i=1;i<m;i++)
        printf("%d ",a[i]); */
	while(b[n-1] != -1){
		scanf("%d",&b[n]);
		n++;
	}
/*  for(i=1;i<n;i++)
        printf("%d ",b[i]); */
    p = 0;
	for(i=1;i<m-1;i++){
		state = 1;
		for(j=1;j<n-1;j++){
			if (a[i] == b[j]){
				state = 0;
				break;
            }
		}
		if (state){
			c[p] = a[i];
			p++;
      }
	}
	for(i = 0;i<p;i++){
          printf("%d ",c[i]);
}
	return 0;
}	
				
