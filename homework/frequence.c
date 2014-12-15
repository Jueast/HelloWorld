#include <stdio.h>
#include <string.h>
#define SIZE 200
struct ch{
	int index;
	int fre;
	char c;
};
struct ch list[260];
int cmp(struct ch *a,struct ch *b);
void sqsort(struct ch list[],int l,int h);
int main(void){
	char s[SIZE];
	int i,j;
	gets(s);
	for(i = 0;i<250;i++){
		list[i].index = -1;
		list[i].fre = 0;
		list[i].c = (char)i;
	}
	for(i=0;i<strlen(s);i++){
		if (list[s[i]].index == -1)
			list[s[i]].index = i;
		list[s[i]].fre += 1;
	}
	sqsort(list,0,250);
	for(i=0;i<256;){
		for(j=0;j<4 && i<256;i++){
			if(list[i].fre > 0){
				if(j != 3){
					printf("%c-%d ",list[i].c,list[i].fre);
					j++;
				}
				else{
					printf("%c-%d",list[i].c,list[i].fre);
					j++;
				}
			}
		}
		printf("\n");
	}
	//system("pause");
	return 0;
}
	
				
int cmp(struct ch *a,struct ch *b){
	if (a->fre != b->fre)
		return a->fre - b->fre;
	else
		return b->index - a->index;
}
void sqsort(struct ch list[],int l,int h){
	int i=l,j=h;
	struct ch pivot;
	if (l >= h)
		return;
	pivot = list[l];//save the data!!!!!
	while(i<j){
		while(i<j && cmp(&pivot,&list[j])>0) j--;
		if(i<j)
			list[i++] = list[j];
		while(i<j && cmp(&pivot,&list[i])<0) i++;
	        if(i<j)
			list[j--] = list[i];
	}
	list[i] = pivot;
	sqsort(list,l,i-1);
	sqsort(list,i+1,h);
	return;
}

	
	 
