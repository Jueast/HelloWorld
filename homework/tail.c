#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNUM 1000
#define MAXLINES 200
int main(int argc,char *argv[]){
	char *line[MAXLINES],temp[MAXNUM];
	int n=10,i=0,nl=0;
	FILE *in;
	while( --argc>0 && (*++argv)[0] == '-'){
		n = atoi(++argv[0]);
	}
	in = fopen(*argv,"r");
	while(fgets(temp,MAXNUM,in) != NULL){
		line[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(line[i++],temp);
	};
	nl = i;
	for(i=0;i<nl;i++){
		if ((nl - n) <= i)
			printf("%s",line[i]);
	}
	return 0;
}



