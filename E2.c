#include <stdio.h>
#include <math.h>
int main(void){
	int n,p,k,i,f1,f2;
	double p1,p2,result;
	while(scanf("%d%d%d",&n,&p,&k) != EOF){
        scanf("%d%d",&f1,&f2);
		p2 = 0;
		p1 = pow((double)(p - f1 + 1)/p,n);
		for(i=k;i<=n-1;i++){
			p2 += (n-i+1)*pow((double)(p-f2+1)/p,i) * (1.0 - pow((double)f1/p,n-i));
		}
		result = p1 + p2;
		printf("%.3f\n",result);
	}
	return 0;
}
