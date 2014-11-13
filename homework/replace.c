#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void){
    char in[SIZE],out[SIZE],temp[SIZE],c;//only support the alpha string.
	FILE *fin;
    FILE *fout;
	int n,i,state;
	fin = fopen("filein.txt","r");
	fout = fopen("fileout.txt","w");
	scanf("%s",in);
	n = strlen(in);
	scanf("%s",out);
	while((c=fgetc(fin)) != EOF){
		if(c == in[0]||c == in[0] +'A' - 'a'){
			temp[0] = c;
			state = 1;
			for(i=1;i<n;i++){
                c = fgetc(fin);
                temp[i] = c;
				if(c != in[i] && c != in[i] + 'A' - 'a'){
					state = 0;
					break;
				}
			}
			temp[i+1] = '\0';
			if(state)
				fprintf(fout,"%s",out);
			else
			   	fprintf(fout,"%s",temp);
		}
		else
			fputc(c,fout);
	}
	fclose(fin);
	fclose(fout);
	//system("pause");
	return 0;
}	 				
