#include <stdio.h>
int main(void){
	int a,b;
	char o;
	scanf("%d %d %c",&a,&b,&o);
	switch(o){
		case'+':
			printf("%d",a+b);
			break;
		case'-':
			printf("%d",a-b);
			break;
		case'*': 
			printf("%d",a*b);
			break;
		case'/':
			if (a % b == 0)
				printf("%d",a/b);
			else
				printf("%.2f",(float)a/b);
	}
		return 0;
}

			

