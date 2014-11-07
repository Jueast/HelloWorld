#include <stdio.h>
int main(void){
	int a,m,remainder,state=0;
	int current;
	scanf("%d%d",&a,&m);
	remainder = a % m;
	for(;remainder<=m;remainder *= 2){
                if ((remainder % m) == 0){
                              state =1;
                              break;}
                              }
    if(state)
		printf("Yes");
	else
		printf("No");
	return 0;
}                         
