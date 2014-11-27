#include <stdio.h>
#include <string.h>
void swap(char *a,char *b);
void selsortw(char word[][20],int n);
int main(int argc,char *argv[]){
	FILE *in,*out;
	int n=0,i;
	char words[100][20]={0};
	char *temp;
	if((in=fopen(argv[1],"r"))==NULL){
       		printf("Can¡¯t open sort.in!");
       		return 1;
    	}
	if((out=fopen(argv[2],"w"))==NULL){
       		printf("Can¡¯t open sort.out!");
       		return 1;
    	}
	while((fscanf(in,"%s",words[n])) != EOF)
		n++;
	selsortw(words,n);
	fprintf(out,"%s ",words[0]);
	temp = words[0];
	for(i=1;i<n;i++){
		if(strcmp(words[i],temp) != 0){
			fprintf(out,"%s ",words[i]);
			temp = words[i];
   }
	}
	fclose(in);
	fclose(out);
	return 0;
}
void swap(char *a,char *b){
	char temp[20];
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}
void selsortw(char word[][20],int n){
	int i,j,tar;
	for(i=0;i<n;i++){
		tar = i;
		for(j=i+1;j<n;j++){
			if(strcmp(word[tar],word[j]) > 0)
				tar = j;
		}
		swap(word[i],word[tar]);
	}
}		
			
				
