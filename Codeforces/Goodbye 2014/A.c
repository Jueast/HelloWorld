#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) (a>b?(a):(b))
#define min(a,b) (a<b?(a):(b))
int a[50000];
int main(void){
	int i,n,t,cur;
	scanf("%d%d",&n,&t);
	for(i=1;i<n;i++){
		scanf("%d",&a[i]);
	}
	cur = 1;
	while(cur<t){
		cur += a[cur];
	}
	if(cur == t){
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
	
