#include <stdio.h>
#include <string.h>
#define SIZE 10005
int counter[SIZE] = {0};//the lenth of the longest consequence uping end of the c;
char str[SIZE];
int max(int a,int b);
int main(void){
	int i,j,result;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		for(j=0;j<=i;j++){
			if(str[j] <= str[i]){ 
				counter[i] = max(counter[j],counter[i]);
			}
		}	
		counter[i]++;
	}
	result = counter[0];	
	for(i=1;i<strlen(str);i++)
		result = max(result,counter[i]);
	printf("%d\n",result);
	//system("pause");
	return 0;
}
int max(int a,int b){
	return a>b?a:b;}
