#include <stdio.h>
int main(void){
	int i,n,m;
	double total,distance;
	scanf("%d %d",&n,&m);
	distance = total = n;
	for(i = 1;i<m;i++){
		distance /= 4;
		total += distance * 2;
	}
	printf("%.2f\n%.2f\n",total,distance / 4);
	return 0;
}
