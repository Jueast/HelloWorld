#include <stdio.h>
#include <string.h>
#define SIZE 1000
int i,j,k,result,num[SIZE] = {0};
char s[SIZE];
int atoi(void);
int main(void){
	gets(s);
	for(i=0,j=0;i<strlen(s);i++){//skip the space
		if (s[i] == ' ')
			continue;
		s[j++]=s[i];
	}
	s[j] = '\0';//complete the input
	//printf("%s",s);
	i=0;
	num[0] = atoi();
	//printf("%d,%d\n",i,num[0]);
	for(j=0,k=0;;){
		switch(s[i]){//caculator save as a series num to add up
		case '*':{
            i++;
			num[j] *= atoi();
			//printf("currentnum:%d\n",num[j]);
			break;}
		case '/':{
             i++;
			num[j] /=  atoi();
			//printf("currentnum:%d\n",num[j]);
			break;}	
		case '+':{
            i++;
			num[++j] = atoi();
			//printf("currentnum:%d\n",num[j]);
			break;}
		case '-':{
            i++;
			num[++j] = -atoi();
			//printf("currentnum:%d\n",num[j]);
			break;}
		}
		//printf("%d:%c\n",i,s[i]);
		if (s[i] == '=')//end the loop
			break;	
		
	}
	result = 0;
	for(i=0;i<=j;i++){//print
		result += num[i];
    }
	printf("%d\n",result);
	//system("pause");
	return 0;
}
int atoi(void){//trans a str to int
		int num = 0;
		while('0'<= s[i] && s[i] <= '9'){
			num = num * 10 + (s[i]-'0');
			//printf("num:%d\n",num);
			i++;
		}
		return num;
}
