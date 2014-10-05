#include <stdio.h>
#define MAXYEARS 100
#define MIN(a,b) (a>b)?b:a
int m,n,p,k;
int main(void){
	int i,total = 0;
	scanf("%d%d%d%d",&m,&n,&p,&k);
    for(i = 0; i<=k;i++){
          total = total + birth_cows(i) - dead_cows(i);
          }
	printf("%d",total);
	return 0;
}
int birth_cows(int k){
    int temp,j;
    temp = 0;
    if (k==0) return 1;
    if (k<m) return 0;
    for(j=k-n;j<=k-m;j++){
        temp += birth_cows(j);
        }
    return temp;

}
int dead_cows(int k){
    if (k<p) return 0;
    return birth_cows(k-p);
}
