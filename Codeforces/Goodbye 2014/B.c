#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) (a>b?(a):(b))
#define min(a,b) (a<b?(a):(b))
int martix[305][305];
int p[305];
int main(void){
	int n,i,j,temp,mine,k;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&temp);
		p[i] = temp; 
	}
	for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        	scanf(" %c",&c);
        	if(c == '0') martix[i][j] = 0;
        	else martix[i][j] = 1;
			}
		}
	for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        	if (martix[i][j] == 1)
        	   for(k=1;k<=n;k++){
        	   	if(martix[j][k] == 1){
        	   		martix[i][k] = 1;
        	   		martix[k][i] = 1;
				   }
			   }
     }
 }
	for(i=1;i<n;i++){
		mine = i;
		for(j=i+1;j<=n;j++){
			if (p[j] < p[mine] && martix[mine][j] == 1)
				mine = j;
			}
		temp = p[mine];
		p[mine] = p[i];
		p[i] = temp;
		}
	for(i = 1;i<=n;i++){
		printf("%d ",p[i]);
	}
	return 0;
}
