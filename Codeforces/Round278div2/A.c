#include <stdio.h>
int judge(long long int num);
int main(void){
	long long int a;
	int b;
	scanf("%I64d",&a);
	for(b=1;;b++)
		if(judge(a+b))
			break;
	printf("%d",b);
	//system("pause");
	return 0;
}
int judge(long long int num){
    num = num>0?num:-num;
	while(num > 0){
		if (num % 10 == 8)
			return 1;
		num /= 10;
	}
	return 0;
}	
