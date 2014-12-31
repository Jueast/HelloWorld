#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXLINES 200
#define MAXCHARS 1000
int main(void){
	FILE *in;
	char *line[MAXLINES];
	char temp[MAXCHARS];
	char *se;
	int nl,nw,i=1;
	in = fopen("in.c","r");
	while(fgets(temp,MAXCHARS,in) != NULL){
		line[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(line[i++],temp);
	}
	nl = i;
	for(i=1;i<nl;i++){
		se = line[i];
		while(1){
			if((nw = out(line[i],se,i)) == 0)
			 	break;
			else
				se += nw;
		}
	}
	//system("pause");
	return 0;
}
int out(char *total,char *l,int z){
	int f,w,i;
	if(l-total +2>= strlen(total)) return 0;
	f = find(l,"for");
	w = find(l,"while");
	i = find(l,"if");
	if(f== 1245 && w== 1245 && i==1245)
		return 0;
	if(f<w&&f<i){
		printf("for:%d,%d\n",z,f+1+(l-total));
		return f+3;
	}
	if(w<f&&w<i){
		printf("while:%d,%d\n",z,w+1+(l-total));
		return w+5;
	}
	if(i<w&&i<f){
		printf("if:%d,%d\n",z,i+1+(l-total));
		return i+2;
	}
	return 0;
}
int find(char s[],char word[]){
	int q[30],nq,i=0,result;
	char temp,*index,*ini;
    index = &s[0];
	ini = &s[0];
	while((index = strchr(index,'"')) != NULL){
		q[i++] = index - ini;
		index++;
	}
	index = &s[0];nq = i;
	while((index = strstr(index,word))!= NULL){
		if((index-1>ini&&isalnum(*(index-1))) || (index-ini<strlen(s)-strlen(word) && isalnum(*(index + strlen(word))))){
            index++;
			continue; 		 
		}
		result = index - ini;
		for(i=0;i<nq;i+=2){
			if(q[i]<result && result<q[i+1]){
				goto here;
			}
		}
		return result;
		here:index++;
	}
	return 1245;
}			
