#include <stdio.h>
#define SIZE 15
int temp,result[SIZE][SIZE];
int main(void){
	int n,i,j;
	char sign;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&result[i][j]);
	scanf(" %c",&sign);//skip the space
	while(sign != '#'){//end 
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&temp);
				if (sign == '+')//switcher
					result[i][j] += temp;
				if (sign == '-')
					result[i][j] -= temp;
			}
		}
	     scanf(" %c",&sign);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d",result[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}		
