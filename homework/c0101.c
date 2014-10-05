#include <stdio.h>
int main(void){
	int x,y,z,total;
	scanf("%d%d%d",&x,&y,&z);
	total = x + y + z;
	printf("%d\n",total);
	printf("%3.2f\n",total/3.0);
	system("pause");
	return 0;
}
