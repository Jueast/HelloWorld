#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main(void){
	char i,s[SIZE],sub[SIZE],j;
	char *index;
	gets(s);
	gets(sub);
	index = &s[0];
	while((index=strstr(index,sub)) != NULL){
		j = 0;
		for(i=0;i<strlen(s);i++){
			if(index-&s[0] <= i && i<index-&s[0]+strlen(sub))
				continue;
			else
				s[j++] = s[i];
		}
		index += strlen(sub);//the next string to search.
		s[j] = '\0';
	} 
	printf("%s",s);
	system("pause");
	return 0;
}
