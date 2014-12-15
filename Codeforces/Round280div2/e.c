#include <stdio.h>
int num[1000500]={0},y[1000500];
int main(void){
	int n,m,dx,dy,a,b,temp;
	long long int i;
	scanf("%d%d%d%d",&n,&m,&dx,&dy);
	y[0] = 0;
	for(i=0;i<n;i++){
         y[(i*dx) % n] = (i*dy) % n;
    }
	for(i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		temp = b -y[a]>=0?b-y[a]:b+n-y[a];
		num[temp]++;
	}
    temp = 0;	
    for(i=1;i<n;i++){
         temp = num[temp]>num[i]?temp:i;}
    printf("0 %d\n",temp);
    //getchar();
    return 0;
}    

