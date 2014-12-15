#include <stdio.h>
#include <string.h>
int first[200050]={0},second[200050]={0};
int main(void){
	int numf = 0 ,j=0,k=0;
	int i,n,temp,state = 0;
	long long int num = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		num += temp;
		if (temp>0){
			first[j++] = temp;
		}
		else{
			second[k++] = -temp;
		}
	}
	if(num>0){
		printf("first\n");
	}
	else if(num<0)
		printf("second\n");
	else{
		for(i=0;i<(j>k?j:k);i++){
			if(first[i] > second[i]){
				state = 1;
				break;}
			if(first[i] < second[i]){
				state = 2;
				break;}
			}
		if(state == 0) state = (temp>0)?1:2;
		if(state == 1)
			printf("first\n");
		else if (state == 2)
			printf("second\n");
		
	}		
	return 0;
}		
