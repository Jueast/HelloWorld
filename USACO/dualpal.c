/*
ID:eastern3
LANG:C
TASK:dualpal
*/
#include <stdio.h>
#include <string.h>
void ttoB(char a[],int num,int B);
void reverse(char a[]);
int judge(char new[]);
int main(void){
	int i,N,S,j,state;
	char bn[30];
	freopen("dualpal.in","r",stdin);
	freopen("dualpal.out","w",stdout);
	scanf("%d%d",&N,&S);
	for(i=S+1;N != 0;i++){
		state = 0;
		for(j=2;j<=10;j++){
			ttoB(bn,i,j);
			if(judge(bn)){
				state++;
			}
		}
		if(state>=2){ 
			printf("%d\n",i);
			N--;
		}
	}
	return 0;
}

int judge(char new[]){
	char temp[30];
	strcpy(temp,new);
	reverse(temp);
	if(strcmp(temp,new) == 0)
		return 1;
	else
		return 0;
}
void reverse(char a[]){
	int i,j;char temp;
	for(i=0,j=strlen(a)-1;i<j;i++,j--){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return;
}
void ttoB(char a[],int num,int B){
	int temp = num,j=0;
	j=0;
	do{
			a[j++] = temp % B<10?temp % B + '0':temp % B - 10 +'A';
			temp /= B;
		}while(temp != 0);
		a[j] = '\0';
	return;
}

