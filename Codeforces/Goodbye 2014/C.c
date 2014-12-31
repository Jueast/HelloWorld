#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) (a>b?(a):(b))
#define min(a,b) (a<b?(a):(b))
int w[505];int mark[505];
int b[1005];
int main(void){
	int n,m,i,j,temp,result;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&w[i]);
	}
	for(i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	result = 0;
	for(i=1;i<=m;i++){
		memset(mark,0,sizeof(mark));temp = 0;
		for(j=i-1;j>=1;j--){
			if(b[j] == b[i]) break;
			if(mark[b[j]] == 0){
				temp += w[b[j]];
				mark[b[j]] = 1;
			}
		}
		result += temp;				
	}
	printf("%d\n",result);
	return 0;
	}
	
	
	
