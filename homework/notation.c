#include <stdio.h>
#include <string.h>
int main(void){
	char num[108],new[108];
	int i,d,head,exp,j;
	gets(num);
	d = (strchr(num,'.') - &num[0]);//the position of '.'
	for(i=0;i<strlen(num);i++){
		if(num[i] != '.' && num[i] != '0'){
			head = i;
			break;
		}
	}
	exp = ((d - head)>0)?d-head-1:d-head;
	j = 0;
	for(i=head;i<strlen(num);i++){
        if(num[i] == '.')
                  continue;
        if(j == 1)
			new[j++] = '.';
		new[j++] = num[i];
	}
	new[j] = '\0';
	printf("%se%d",new,exp);
	//system("pause");
	return 0;
}
	
	
	
