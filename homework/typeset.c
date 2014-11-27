#include <stdio.h>
#include <string.h>
#include <ctype.h>
char text[30][200];
int nlines = 0;
void fix(char temp[],int p);
int main(void){
	int i,p;
	char temp[150];
	scanf("%d",&p);
	while((gets(temp)) != NULL){
	             fix(temp,p);
              }
	for(i=0;i<nlines;i++)
		printf("%s\n",text[i]); 
	system("pause");
	return 0;
}
void fix(char temp[],int p){
	int i,state = 0,t=0,point;
	char newl[130]={0};
	for(i=0;i<strlen(temp);){
		switch(state){
			case 0:
				while(temp[i] == ' '||temp[i] == '\t')
					i++;
				if(temp[i] == ':'){
					newl[t++] = ':';
					i++;
					point = t;
 					state = 2;
				}
 				else
 					state = 1;
				break;//the start
			case 1:
				while(temp[i] != ' ' && temp[i] != '\t' && temp[i] != ':')
					newl[t++] = temp[i++];
				newl[t++] = ' ';
				state = 0;
				break;//get the words before the ':'
			case 2:
				while(i<strlen(temp) && (temp[i] == ' '|| temp[i] == '\t'))
					i++;
				state = 3;
				break;//skiper after ':'
			case 3:
				newl[t++] = ' ';
				while(i<strlen(temp) && temp[i] != ' ' && temp[i] != '\t')
					newl[t++] = temp[i++];
				state = 2;
				break;//get the words after the ':'
		}
 		
	}
	//printf("%s\n",newl);
	for(i=0;i<p-point;i++)
		text[nlines][i] = ' ';
	text[nlines][i] = '\0';
	strcat(text[nlines],newl);
	//printf("%s\n",text[nlines]);
	nlines++; 
}
