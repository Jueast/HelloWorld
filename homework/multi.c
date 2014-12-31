#include <stdio.h>
#include <stdlib.h>
struct Link{
	int a;
	int e;
	struct Link *next;
};
int main(void){
	char c;int tempa,tempe;
	struct Link p1,p2,result,*tail,*node,*i,*j,*k;
	scanf("%d%d%c",&p1.a,&p1.e,&c);
	p1.next = NULL;tail = &p1;
	while(c != '\n'){
		node = (struct Link *)malloc(sizeof(struct Link));
		scanf("%d%d%c",&(node->a),&(node->e),&c);
		node->next = NULL;
		tail->next = node;
		tail = node; 		
	}
	scanf("%d%d%c",&p2.a,&p2.e,&c);
	p2.next = NULL;tail = &p2;
	while(c != '\n'){
		node = (struct Link *)malloc(sizeof(struct Link));
		scanf("%d%d%c",&(node->a),&(node->e),&c);
		node->next = NULL;
		tail->next = node;
		tail = node; 		
	}
	i=&p1;k=&result;result.next = NULL;
	while(i != NULL){
		j=&p2;
		while(j != NULL){
			tempa = i->a * j->a;
			tempe = j->e + i->e;
			k = &result;
			while(k->next != NULL && (k->next)->e >=tempe){
				if ((k->next)->e == tempe){
					(k->next)->a += tempa;
					break;
				}
				k = k->next;
			}
			if(k->next == NULL){
                node = (struct Link *)malloc(sizeof(struct Link));
			    node->a = tempa;node->e = tempe;node->next = NULL;
			    k->next = node;
			}
			else if((k->next)->e < tempe){
			    node = (struct Link *)malloc(sizeof(struct Link));
			    node->a = tempa;node->e = tempe;node->next = k->next;
			    k->next = node;
			}
			j = j->next;
		}
		i = i->next;
	}			
	node = result.next;
	while(node != NULL){
		printf("%d %d ",node->a,node->e);
		node = node->next;
	}
	return 0;
}

