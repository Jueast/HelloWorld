#include <stdio.h>
int mark[20] = {0};
int prime[40]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
void dps(int circle[],int n,int position);
int main(void){
	int circle[25];
	int n,num=1;
	while(scanf("%d",&n)!=EOF){
    printf("Case %d:\n",num++);
    memset(circle,0,sizeof(circle));
	circle[1] = 1;
	dps(circle,n,2);
	printf("\n");
    }
	system("pause");
	return 0;
}
void dps(int circle[],int n,int position){
	int i,j,temp;
	if(position == n+1){
        if (!prime[circle[n]+1])
           return;    
		for(i=1;i<n;i++)
			printf("%d ",circle[i]);
		printf("%d\n",circle[n]);
		return;
	}
	for(i=2;i<=n;i++){
		if (mark[i] == 0){
			if(prime[circle[position-1]+i]){
				circle[position] = i;
				mark[i] = 1;
				dps(circle,n,position + 1);
				mark[i] = 0;
			}
		}
	}
	return;
}	
