#include <stdio.h>
struct circle{
	int mark;
	struct circle *next;
};       	
int main(void){
	int i,n,m,q,j;
	struct circle monkey[50];
	struct circle *cur;
	scanf("%d%d%d",&n,&m,&q);
	for(i=1;i<=n;i++){
		monkey[i].mark = i;
		monkey[i].next = &monkey[(i+1)<=n?i+1:1];
	}
	cur = &monkey[q];
	for(i<=n;i>1;i--){
		for(j=1;j<=m-2;j++){
			cur = cur->next;
		}
		cur->next = ((cur->next) -> next);
		cur = cur->next;
	}
	printf("%d",cur->mark);
	return 0;
}

