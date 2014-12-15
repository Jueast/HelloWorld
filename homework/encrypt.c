#include <stdio.h>
#include <string.h>
int main(void){
	FILE *in,*out;
	int mark[27] = {0};
	char s[52],key[27]={0};
	char c;
	int i,j=0;
	in = fopen("encrypt.txt","r");
	out = fopen("output.txt","w");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(mark[s[i] - 'a'] == 0){
			key[j++] = s[i];
			mark[s[i] - 'a'] = 1;
		}
	}
	for(i=25;i>=0;i--){
		if(mark[i] == 0)
			key[j++] = i + 'a';
	}
	while((c=fgetc(in)) != EOF){
		if('a' <= c && c <= 'z'){
			fputc(key[c-'a'],out);
		}
		else
			fputc(c,out);
	}
	return 0;
}
