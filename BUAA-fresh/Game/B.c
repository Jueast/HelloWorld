#include <stdio.h>
char num[10][20];
int mark[10]={0},n;
char result[1000]= {0};
char used[300] = {0};
int cl(int k,int m);
int main(void){
	int m,i;
	long long int mul;
	while(scanf("%d%d",&n,&m) != EOF){
		memset(num,0,sizeof(num));
		for(i=0;i<m;i++){
			scanf("%s",num[i]);
		}
		mul = cl(0,m);
		if(mul)
			printf("%d\n",mul);
		else
			printf("-1");
	}
	return 0;
}

int cl(int k,int m){
	int temp,i;
	if(k == m){
	   temp = atoi(result);
	   if (temp % n == 0){
		return temp;}
       else{    
           return 0;}}
	for(i=0;i<m;i++){
		if(mark[i] == 0){
			mark[i] = 1;
			strcat(result,num[i]);
			if(temp = cl(k+1,m))
				return temp;
			strcpy(&result[0] + k,used);
			mark[i] = 0;
		}
	}	
	return 0;
}				
