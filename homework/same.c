#include <stdio.h>
#include <string.h>
int main(void){
	int i,j,nw,nv;
	char *var[15];
	char *word[1000];
	char temp[50];
	FILE *in,*out;
	if((in = fopen("input.c","r")) == NULL){
		printf("Can't open the FILE!\n");
		return 1;
	}
	if((out = fopen("output.c","w")) == NULL){
		printf("Can't create the output!\n");
		return 2;
	}
	i=0;j=0;
	while(fscanf(in,"%s",temp) != EOF){
		word[i] = (char *)malloc(sizeof(char) * (strlen(temp) +1));
		strcpy(word[i++],temp);
		if(strcmp(temp,"int")==0){
			while(1){
				fscanf(in,"%s",temp);
				var[j] =(char *)malloc(sizeof(char) * (strlen(temp) +1));
				strcpy(var[j++],temp);
				fscanf(in,"%s",temp);
				word[i] = (char *)malloc(sizeof(char) * (strlen(temp) +1));
				strcpy(word[i++],temp);
				if(strcmp(temp,";")==0) break;}
		}
	}
	nw = i;nv = j;
	for(i=0;i<nw;i++){
		for(j=0;j<nv;j++){
			if(strcmp(word[i],var[j])==0) goto here;}
		fprintf(out,"%s",word[i]);
		here:;
	}
	//system("pause");
	return 0;
}
				
						
