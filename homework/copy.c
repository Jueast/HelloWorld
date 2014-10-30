#include <stdio.h>
int main(void){
	FILE *in,*out;
	char c;
	int state = 1;//set the state pointer is  in the word;
	in = fopen("fcopy.in","r");
	out = fopen("fcopy.out","w");
	while((c = getc(in)) != EOF){
		if(c != ' ' && c != '\t'){
			state = 1;// a kind of code redundancy!
			putc(c,out);
        }
		else if(state){
			putc(' ',out);
			state = 0;
		}
        else
			continue;
	}
	fclose(in);//Don't forget to close
	fclose(out);
	return 0;
}	
	
