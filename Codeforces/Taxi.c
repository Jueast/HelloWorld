#include <stdio.h>
int main(void){
	int num[5]={0,0,0,0,0},n,temp,result;
	scanf("%d",&n);
	while(n--){//input the data
		scanf("%d",&temp);
		num[temp]++;
	}
	result = num[4]+num[3];//step 1 
	num[1] -= num[3];
	if(num[2] %2 == 0){//step 2
		result += num[2] / 2;
	}
	else{
		result += num[2]/2 + 1;
		num[1] -= 2;}
	result += num[1]>0?((num[1]+3)/4):0;
	printf("%d\n",result);
	//system("pause");
	return 0;
}
