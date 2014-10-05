#include <stdio.h>
#define MAXN 2000
int n,left,right;
char line[MAXN+1];
char best[MAXN+1];
int main(void){
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",&line[i]);
	best[n] ='\0';//confirm the end of string      
	left = 0;right = n-1;
	for(k = 0;k<n;k++){
		if(judge(left,right)){
			best[k] = line[left];
			left++;}//remove the used letter
		else{
			best[k] = line[right];
			right--;}
	}
	printf("%s\n",best);
	system("pause");
	return 0;
	
}
int judge(int left,int right){
	if (left <right){
		if (left != right)
			return line[left] < line[right];
		else
			return judge(left+1,right -1);
	}
	else
		return 1;
}



