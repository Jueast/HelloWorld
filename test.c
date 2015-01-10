#include <stdio.h>
#include <string.h>
char num[200];
void solve(int e);
int main(void){
	int i,e;
	scanf("%c.%[^e]s",&num[0],num+1);
	e = getchar();
	scanf("%d",&e);
	solve(e);
	return 0;
}
void solve(int e){
	int i,l = strlen(num);
	char temp[200];
	if (e == 0){
		printf("1\n");
		return;}
	if( e >= l - 1){
		for(i=l;i<e+1;i++)
			num[i] = '0';
		num[i] = '\0';
		printf("%s\n",num);
		return;
	}
	else{
		strcpy(temp,num);
		temp[e+1] = '.';
		strcpy(&temp[e+2],&num[e+1]);
		temp[l+1] = '\0';
	     	printf("%s\n",temp);
		return;
	}
}
		
	

