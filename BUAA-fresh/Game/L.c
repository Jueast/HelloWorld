#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?(a):(b))
struct edge{
       int a;
       int b;
};
int item[100050];
int delay[100050];
struct edge line[100050];
int scmp(const void *j,const void *k);
void update(int src);
int main(void){
	int m,n,i,result,a,b;
	while(scanf("%d%d",&n,&m) != EOF){
		result=0;
		memset(item,0,sizeof(item));
		memset(delay,0,sizeof(delay));
		memset(line,0,sizeof(line));
		for(i=1;i<=n;i++){
			scanf("%d",&item[i]);
            delay[i] = item[i];
            }
		for(i=1;i<=m;i++){
			scanf("%d%d",&line[i].a,&line[i].b);			
		}
		qsort(line,m,sizeof(line[0]),scmp);
		for(i=1;i<=m;i++){
            if (item[line[i].b] + delay[line[i].a]>delay[line[i].b]){
                                delay[line[i].b] = item[line[i].b] + delay[line[i].a];
                                if(line[i].b<line[i].a)
                                     update(line[i].b);}
                                     }
		for(i=1;i<=n;i++)
			result = max(result,delay[i]);
		printf("%d\n",result);
	}
	return 0;
}
int scmp(const void *j,const void *k){
    struct edge *n,*m;
    n = (struct edge *)j;m = (struct edge *)k;
    if((n->a) != (m->a))
              return (n->a) - (m->a);
    else
              return (n->b) - (m->b);
}
void update(int src){
     int i;
     for(i=1;line[i].a<=src;i++){
         if (line[i].a == src){
             if(delay[src] + item[line[i].b] > delay[line[i].b]){
                           delay[line[i].b] = delay[src] + item[line[i].b];
                           update(line[i].b);
                           }
             }
         }
     return;}

                           
     
     
     
     
     
     	
