#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXWORD 105
struct pair{
	int line;
	int colume;
	struct pair *next;
};
struct tnode{
	char *word;
	struct pair *pos;
	struct tnode *left;
	struct tnode *right;
};
struct tnode *addtree(struct tnode *p,char *w,struct pair *posi);
void linkprint(FILE *out,struct pair *p);
struct pair *pairloc(void);
void treeprint(struct tnode * in,FILE *out);
struct tnode *talloc(void);
int main(void){
	FILE *in,*out;
	struct tnode *root = NULL;
	char word[MAXWORD];
	char line[2000];
	struct pair *posi;
	int i = 0,j,len,k;
	if((in = fopen("crossin.txt","r")) == NULL){
		printf("Can't open the file!");
		return 1;
	}
	if((out = fopen("crossout.txt","w")) == NULL){
		printf("Can't open the file!");
		return 1;
	}
	while(fgets(line,1999,in) != NULL){
		i++;len = strlen(line);
		for(j = 0;j<len - 1;j++){
			if(isalpha(line[j])){
				for(k = 0;(isalpha(line[j+k])||line[j+k]=='-') && j+k <len -1;k++)
					word[k] = line[j+k];
				word[k] = '\0';
				posi = pairloc();
				posi->line = i;
				posi->colume = j+1;
				posi->next = NULL;
				if(isalpha(word[0]))
								   root = addtree(root,word,posi);
	        j += k-1;
			}
		}
	}	
	treeprint(root,out);
	return 0;
}
struct tnode *addtree(struct tnode *p,char *w,struct pair *posi){
	int len = strlen(w);
	char *nw;
	struct pair *tail;
	int cond;
	if( p == NULL){
		p = talloc();
		nw = (char *)malloc(len + 1);
		strcpy(nw,w);
		p->word = nw;
		p->pos = posi;
		p->left = NULL;
		p->right = NULL;
	}
	else if( (cond = strcmp(p->word,w)) == 0){
		posi->next = p->pos;
		p->pos = posi;}
	else if (cond > 0)
		p->left = addtree(p->left,w,posi);
	else 
		p->right = addtree(p->right,w,posi);
	return p;
}
struct pair *pairloc(void){
	return (struct pair *)malloc(sizeof(struct pair));
}
struct tnode *talloc(void){
	return (struct tnode *)malloc(sizeof(struct tnode));
}
void treeprint(struct tnode * p,FILE *out){
	if ( p != NULL ){
		treeprint( p -> left,out);
		if(judge(p->word)){
		fprintf(out,"%s:",p->word);
		linkprint(out,p->pos);
		fseek(out,-1,SEEK_CUR);
		fprintf(out,"\n");}
		treeprint( p -> right,out);
	}

}
int judge(char *w){
	return strcmp(w,"and")&&strcmp(w,"the")&&strcmp(w,"a")&&strcmp(w,"an") ;
}
void linkprint(FILE *out,struct pair *p){
	if(p->next == NULL){
		fprintf(out,"(%d,%d),",p->line,p->colume);
	}
	else{
		 linkprint(out,p->next);
		 fprintf(out,"(%d,%d),",p->line,p->colume);}
}

