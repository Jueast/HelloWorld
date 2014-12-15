#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 12000
char temp[SIZE][2*SIZE];
int scmp(const void *a,const void *b);
int main(void){
	int N,i,p;
	int flags[SIZE];
	char s[SIZE];
	char *poi;
	FILE *in;
	FILE *out;
	if((in = fopen("filezip.in","r")) == NULL){
		printf("Can't open the file!");
		return 1;
	}
	if((out = fopen("filezip.out","w")) == NULL){
		printf("Can't open the file!");
		return 2;
	}
	fscanf(in,"%d",&N);
	fscanf(in,"%s",s);
	for(i=0;i<N;i++){
		flags[i] = i;
		poi = &s[i];
		strcpy(temp[i],poi);
		poi = &s[0];	
		strcat(temp[i],poi);
		temp[i][N] = '\0';
	}
	qsort(flags,N,sizeof(flags[0]),scmp);
	for(i=0;i<N;i++){
		s[i] = temp[flags[i]][N-1];
	}
	for(i=0;i<N;i++){
		if(flags[i] == 1){
			p = i+1;
			break;
		}
	}
	s[N] = '\0';
	fprintf(out,"%s\n%d\n",s,p);
	fclose(in);
	fclose(out);
	//system("pause");
	return 0;
}
	

int scmp(const void *a,const void *b){
    int ta,tb;
	ta = *(int *)a;
	tb = *(int *)b;
	if (temp[ta][0] != temp[tb][0]){
		return temp[ta][0] - temp[tb][0];
	}
	else
		return ta - tb;
	}	
