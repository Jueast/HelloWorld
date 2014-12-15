#include <stdio.h>
#include <math.h>
int main(void){
	int i,n,p,k,f1,f2;
	double result,p1,p2;
	while(scanf("%d%d%d",&n,&p,&k) != EOF){
		scanf("%d%d",&f1,&f2);p1=0;p2=0;result = 0;
		if(f1 <= p)
              p1 = pow((double)(p-f1+1),n)/pow((double)p,n);
        else{
             printf("%.3f",result);
             continue;
             }
        if(f2 <= p){
              for(i=k;i<=n-1;i++){
		                        p2 += (n-i+1) * pow((p-f2+1)/(double)p,i)*(pow((f1-1)/(double)p,n-i));}
		      result = p1 + p2;}
        else
            result = p1;
		printf("%.3f\n",result);
	}
	return 0;
}
 
