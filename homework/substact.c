#include <stdio.h>
#include <string.h>
int main(void){
	char a[100],b[100],result[100];
	int i,j,k,signr = 1,state = 0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=80,j=strlen(a)-1,k = strlen(b)-1;i>=0;i--){//move the number
		if(j>=0)
			a[i] = a[j--] - '0';
		else
			a[i] = 0;
		if(k>=0)
			b[i] = b[k--] - '0';
		else
			b[i] = 0;
	}
	for(i=0;i<=80;i++){// Do subtraction
		result[i] = a[i] - b[i];
		if(!state){
			if(result[i] != 0){
				signr = result[i] > 0 ?1:-1;
				state = 1;
			}
		}
	}
	for(i=80;i>=1;i--){//To transfer a carry digit.
		if( signr > 0){
			if (result[i]< 0){
			   result[i-1] -= 1;
			   result[i] += 10;
			}
		}
		if( signr < 0){
			if (result[i] > 0){
			   result[i-1]++;
			   result[i] -= 10;
			}
		}
	} 
	state = 0;
	if(signr < 0) printf("-");
 	for(i=0;i<=80;i++){
		if(state == 0 ){
			if(result[i] != 0){
				printf("%c",signr*result[i] + '0');
				state = 1;}
			else if(i == 80)
				printf("%c",'0');
		}
		else
			printf("%c",signr*result[i] + '0');
	}
	printf("\n");
	system("pause");
	return 0;
}
