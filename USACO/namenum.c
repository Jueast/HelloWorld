/*
ID:eastern3
LANG:C
TASK:namenum
*/	
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
	char number[13],temp[20];
	char *dic[5000];
	FILE *in;
	int i=1,N,counter=0;
	freopen("namenum.in","r",stdin);
	freopen("namenum.out","w",stdout);
	in = fopen("dict.txt","r");
	while(fgets(temp,20,in) != NULL){
		temp[strlen(temp)-1] = '\0';
		dic[i] = (char *)malloc(strlen(temp)+1);
		strcpy(dic[i++],temp);
	}
	N = i - 1;
	scanf("%s",number);
	for(i=1;i<=N;i++){
		if(judge(number,dic[i])){
			printf("%s\n",dic[i]);
			counter += 1;
		}
	}
	if(counter == 0){
		printf("NONE\n");
	}
	return 0;
}
int judge(char number[],char word[]){
	int len = strlen(number);
	int i;
	if (len != strlen(word))
		return 0;
	for(i=0;i<len;i++){
		if('A'<=word[i] && word[i] <= 'O'){
			if(!((word[i] - 'A') / 3 + 2 == number[i] - '0'))
				return 0;
		}
		else{
			if (word[i] == 'Q' || word[i] == 'Z')
				return 0;
			if('P'<=word[i] && word[i] <= 'S'){
				if(!(number[i] - '0' == 7))
					return 0;}
			if('T'<=word[i] && word[i] <= 'V'){
				if(!(number[i] - '0' == 8))
					return 0;}
			if('W'<=word[i] && word[i] <= 'Y'){
				if(!(number[i] - '0' == 9))
					return 0;}
		}

	}
	return 1;
}	
