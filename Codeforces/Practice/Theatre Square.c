#include <stdio.h>
int main(void){
    long long int n,m,a;
    long long int result;
	scanf("%I64d %I64d %I64d",&n,&m,&a);//consider the range of the date;using I64d.
	n = (n+a-1)/a;
	m = (m+a-1)/a;
	result = n*m;
	printf("%I64d",result);
	return 0;
}
