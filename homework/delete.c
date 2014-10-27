#include <stdio.h>
#include <ctype.h>
#define SIZE 1000
char num[SIZE],newn[SIZE]; 
int main(void){
	int i = 0,N,pointer = 1,j=0,k=0,output;
	while(1){
         	scanf("%c",&num[i++]);//input the int
        	if (num[i-1] == '\n') {
            		i--;
            		break;
         	}
        }
	num[i] = '\0';
	scanf("%d",&N);
	for(newn[0] = num[0];;){
		while(newn[j] > num[pointer] && j > -1){//delete all numbers bigger than pointer number.
			j--;
			k++;
			if (k >= N) 
			   goto here;//if delete N numbuers stop and output.
		}
		newn[++j] = num[pointer];//push the pointer number in new.
		pointer++;//move the pointer to the right.
	}
	here:;
	for(output = 0;output<=j;output++)//print the new number
		printf("%c",newn[output]);
	for(output = pointer;output<i;output++)
		printf("%c",num[output]);
	printf("\n");
	return 0;
} 
	
