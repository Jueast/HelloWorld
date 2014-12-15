#include <stdio.h>
long long int result[100050]={0,0,1,7};
long long int power[100050];
int main(void){
	int n,i,counter = 1;
	power[1] = 1;
	for(i=2;i<=100000;i++){
        power[i] = (power[i-1] * i) %1000000007 ;} 
	for(i=2;i<=100000;i++){
	    result[i] = (i*result[i-1] + power[i-1]*(i-1)) %1000000007 ;
		}
	while(scanf("%d",&n) !=EOF){
		printf("Case #%d: %lld\n",counter,result[n]);
		counter++;
	}
	return 0;
}

		
		
