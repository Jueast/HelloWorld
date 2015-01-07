#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a,b) (a>b?(a):(b))
#define min(a,b) (a<b?(a):(b))
int martix[305][305];
int p[305];int par[305];
int find(int x){
	if(par[x] == x)
			  return x;
    else 
    	 return par[x] = find(par[x]);
}
void merge(int x,int y){
	x = find(x);
	y = find(y);
	if (x == y) return;
	par[x] = y;
}
int same(int x,int y){
	return find(x) == find(y);
}
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
	memset(par,0,sizeof(par));
	for(i=1;i<=n;i++)
        par[i] = i;
	for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
        	if (martix[i][j] == 1)
        	   merge(i,j);
        }
    }
	for(i=1;i<n;i++){
		mine = i;
		for(j=i+1;j<=n;j++){
			if (p[j] < p[mine] && same(i,j))
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
