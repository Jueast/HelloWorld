#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char tel[20];
	char name[20];
}people;
int tcmp(const void *a,const void *b);
int main(void){
	int i,n;
	char temp[20];
	char fomat[60][10];
	people user[60];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s",user[i].name,user[i].tel);
	}
	qsort(&user[0],n,sizeof(user[0]),tcmp);
	for(i=0;i<n;i++){
		strcpy(temp,user[i].name);
		sprintf(user[i].name,"%.10s",temp);
		strcpy(temp,user[i].tel);
		sprintf(user[i].tel,"%.10s",temp);
	}
	for(i=0;i<n;i++){
		printf("%12s%12s\n",user[i].name,user[i].tel);
	}
	return 0;
}
int tcmp(const void *a,const void *b){
	people *c,*d;
	c = (people *)a;d = (people *)b;
	return strcmp(c->name,d->name);
}	
