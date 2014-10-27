#include <stdio.h>
char result[26] = {0};
int main(void){
	char c;
	int max,i,j;
	while((c = getchar()) != EOF){
		if('a' <= c && c<= 'z')
			result[c-'a'] += 1;
	}
	for(max = result[0],i=1;i<26;i++){
	       max = result[i]>max?result[i]:max;
       	}
	for(i=0;i<max;i++){
		for(j=0;j<26;j++){
			if (result[j] >= (max - i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	for(c='a';c<='z';c++){
		printf("%c",c);
	}
	//system("pause");
	return 0;
}


