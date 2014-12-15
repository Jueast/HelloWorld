#include <stdio.h>
int main(void){
	int m,n,small,big,i,result=1,x,num;
	while(scanf("%d%d",&n,&m) != EOF){
        result = 1;num= 1;x=1;
		small = m>n?n:m;
		big = m<n?n:m;
		for(i=0;i<big;i++)
			x *=2;
		for(i=0;i<small;i++)
            num *=2 ;
		result = (x-1) * num;
        printf("%d\n",result);
	}
	return 0;
}
