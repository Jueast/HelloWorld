/*
ID:eastern3
LANG:C
TASK:beads
*/
#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
int main(void){
	int N,i,l[800][2],r[800][2];
	char neck[800];
	int result;
	freopen("milk2.in","r",stdin);
	freopen("milk2.out","w",stdout);
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf(" %c",&neck[i]);
		neck[i+N] = neck[i];
	}
	l[0][0] = 0;l[0][1] = 0;
	for(i=1;i<=2*N;i++){
		switch(neck[i]){
			case 'b':l[i][0] = l[i-1][0] +1;
		             l[i][1] = 0;
		             break;
		    case 'r':l[i][1] = l[i-1][1] +1;
		             l[i][0] = 0;
		             break;
			default: l[i][1] = l[i-1][1] +1;
					 l[i][0] = l[i-1][0] +1;
					 break;        
		}
	}
	r[2*N+1][0] = 0;r[2*N+1][1] = 0;
	for(i=2*N;i>=1;i--){
		switch(neck[i]){
			case 'b':r[i][0] = r[i+1][0] +1;
		             r[i][1] = 0;
		             break;
		    case 'r':r[i][1] = r[i+1][1] +1;
		             r[i][0] = 0;
		             break;
			default: r[i][1] = r[i+1][1] +1;
					 r[i][0] = r[i+1][0] +1;
					 break;        
		}
	} 
	result = 2;
	for(i=1;i<=2*N-1;i++){
		result = max(result,max(l[i][0]+r[i+1][1],l[i][1]+r[i+1][0]));
	}
	printf("%d\n",(result>N)?N:result);
	return 0;
}		
		
		
	
