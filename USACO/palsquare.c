#include <stdio.h>
#include <string.h>
/*
ID:eastern3
LANG:C
TASK:palsquare
*/
void ttoB(char a[],int num,int B);
void reverse(char a[]);
int judge(char new[]);
int main(void){
	int i,B,temp;
	char newx[30],num[10];
	freopen("palsquare.in","r",stdin);
	freopen("palsquare.out","w",stdout);
	scanf("%d",&B);
	for(i=1;i<=300;i++){
		temp = i*i;
		ttoB(num,i,B);
		reverse(num);
		ttoB(newx,i*i,B);
		if(judge(newx))
			printf("%s %s\n",num,newx);
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
