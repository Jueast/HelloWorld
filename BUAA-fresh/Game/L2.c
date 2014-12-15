#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
struct node{
	int data;
	int delay;
	int bedge;
	int mark;
};
struct link{
	int sr;
	int next;
};
struct node item[100050];
struct link tube[100050];
int dps(int p);
int main(void){
	int n,m,i,src,de,j=1,result;
    int temp;
	while(scanf("%d%d",&n,&m) != EOF){
		result = 0;
		for(i=1;i<=n;i++){
			scanf("%d",&item[i].data);
			item[i].delay = item[i].data;
			item[i].bedge = 0;
			item[i].mark = 0;
			tube[i].next = 0;
			tube[i].sr = 0;
		}
		for(i=1;i<=m;i++){
			scanf("%d%d",&src,&de);
			tube[j].sr = src;
			temp = item[de].bedge;
			item[de].bedge = j;
			tube[j].next = temp;
			j++;
		}
		for(i=1;i<=n;i++){
          if(item[i].mark == 0)
			dps(i);
		}
		for(i=1;i<=n;i++){
			result = max(result,item[i].delay);
		}
		printf("%d\n",result);
	}
	return 0;
}
int dps(int p){
	int before,temp,a;  
    before = item[p].bedge;
    if(before == 0||item[p].mark == 1) return item[p].delay;
    temp = item[p].delay;
	while(before != 0){
        temp = max(dps(tube[before].sr)+item[p].data,temp);
        a = tube[before].sr;
        *&item[a].mark = 1;
		before = tube[before].next;
	}
	item[p].delay = temp;
	return temp;
}

