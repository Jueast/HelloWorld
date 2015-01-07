/*
ID:eastern3
LANG:C
TASK:gift1
*/
#include <stdio.h>
#include <string.h>
int main(void){
	char name[12][20],temp[20],c;
	int n,i,j,x,money;
	int account[12];
	freopen("gift1.in","r",stdin);
	freopen("gift1.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%s",name[i]);
	memset(account,0,sizeof(account));
	while(scanf("%s",temp) != EOF){
		scanf("%d%d",&money,&x);
		if(x == 0) continue;
		for(i=1;i<=n;i++)
			if(strcmp(temp,name[i]) == 0)
				break;
		account[i] -= money - money % x;
		for(i=1;i<=x;i++){
			scanf("%s",temp);
			for(j=1;j<=n;j++)
				if(strcmp(temp,name[j]) == 0)
					break;
			account[j] += money / x;
		}
	}
	for(i=1;i<=n;i++){
		printf("%s %d\n",name[i],account[i]);
	}
	return 0;
}



