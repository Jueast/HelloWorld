#include <stdio.h>
#define SIZE 100

void expend(char s1[],char s2[]);
int main(void){
    char in[SIZE],out[SIZE],c;
    int i=0;
	while((c=getchar()) != '\n')
                       in[i++] = c;//input an char array including space
    in[i] = '\0';    
	expend(in,out);
	//printf("%s",in);
    printf("%s",out);
	system("pause");
	return 0; 
}
void expend(char s1[],char s2[]){
	char add,j,i=0;
	for(j=0;s1[j] != '\0';j++){
		if(s1[j] == '-' && !(s1[j-1] +1 > s1[j+1])){//expend the word
			if(j==0){
				continue;
            }
            else
			    for(add = s1[j-1] + 1;add<s1[j+1];add++)
				        s2[i++] = add;
			}
		else{
  		  while(s1[j] == ' '){ 
			s2[i++] = s1[j++];
          }
          s2[i++] = s1[j];
    }
	}
	s2[i] = '\0';
}
