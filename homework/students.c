#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int num;
	char name[100];
	int age;
} group;
int ncmp(const void *a,const void *b);
int acmp(const void *a,const void *b);
int main(void){
	int n,i;
	group student[55];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s %d",&student[i].num,student[i].name,&student[i].age);
	}
	qsort(&student[0],n,sizeof(student[0]),ncmp);
	for(i=0;i<n;i++)
		printf("%3d%6s%3d\n",student[i].num,student[i].name,student[i].age);
	printf("\n");
	qsort(&student[0],n,sizeof(student[0]),acmp);
	for(i=0;i<n;i++)
		printf("%3d%6s%3d\n",student[i].num,student[i].name,student[i].age);
	return 0;
}
int ncmp(const void *a,const void *b){
	group *c,*d;
	c = (group *)a;
	d = (group *)b;
	return strcmp((c->name),(d->name));
}
int acmp(const void *a,const void *b){
	group *c,*d;
	c = (group *)a;
	d = (group *)b;
	if( c->age != d->age)
		return  c->age - d->age;
	else 
		return strcmp((c->name),(d->name));
}
