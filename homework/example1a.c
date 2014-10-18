#include <stdio.h>
int main(void){
	double result,e,temp,preresult;
	int n,i;
	scanf("%lf",&e);
	n = 0;
	result = 0;
	while (1){
		temp = 1;
		n++;
		for(i = 1;i<n;i++){
			temp *= (double)i/(2*i+1); 
		}
		preresult = result;
		result += temp;
		if (2*(result - preresult) < e)
		 	break;
	}	
	printf("%d %.7f\n",n,result*2.0);
	//system("pause");
	return 0;
}
