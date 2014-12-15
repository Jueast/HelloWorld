#include <stdio.h>
char chess[1005][1005];
long long int way[1005][1005];
int main(void){
	int i,j,m,n,counter=0;
	int k,l,temp;
	long long int result;
	freopen("out2.out","w",stdout);
	freopen("data.in","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF){
		memset(chess,0,sizeof(chess));
		result =0;temp=0;
		for(i=0;i<n;i++)
			scanf("%s",chess[i]);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				for(k=i;k<n;k++){
					for(l=j;l<m;l++){
						if(judge(i,j,k,l)) result++;
					}
				}			
			}
		}
		printf("case#%d:%lld\n",counter++,result);
	}
	return 0;
}

int judge(int a,int b,int c,int d){
	int i,j,k,state1=0,state2=0;
	if (a==c && b==d) return 0;
	for(i=a;i<=c;i++){
		for(j=b;j<=d;j++){
			if (chess[i][j] == 'B') state1 = 1;
			if (chess[i][j] == 'W') state2 = 1;
			if (state1 && state2) return 1; 
		}
	}
	return 0; 
}
