#include <stdio.h>
int main(void){
	FILE *in;
	char c;
	int total=0,com=0,state = 0,rate;
	in = fopen("filein.c","r");
	while((c=getc(in)) != EOF){
		total++;
		if(c == '/'){
			if (state == 0){
				state = 1;
				com--;
                }       //ignore the '*'
			else{
				state = 0;
				com--;}//ignore the '*'
		}
		else{ 
			if(state)
				com++;
			else
				continue;
		}
	}
	//printf("%d %d\n",total,com);
	rate = (com*100)/total;
	printf("%d%%\n",rate);
	fclose(in);
	//system("pause");
	return 0;
}
