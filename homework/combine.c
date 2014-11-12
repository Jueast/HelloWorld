#include <stdio.h>
#include <string.h>
#define SIZE 300
char* str_bin(char* str1,char* str2);
int main(void){
	char a[SIZE],b[SIZE];
	scanf("%s",a);
	scanf("%s",b);
	printf("%s\n",str_bin(a,b));
	system("pause");
	return 0;
}
char* str_bin(char* str1,char* str2){
      char temp[200];
      int i=0,j=0,k=0;
      strcpy(temp,str1);
      while(temp[i] != '\0' || str2[j] != '\0'){
      	if(temp[i] != '\0' && str2[j] != '\0'){
      		if(temp[i] > str2[j])
      			str1[k++] = str2[j++];
      		else
      			str1[k++] = temp[i++];
      	}
      	else{
      		if (temp[i] == '\0')
      			str1[k++] = str2[j++];
      		else
      			str1[k++] = temp[i++];
      	}
      }
      str1[k] = '\0';
      return str1;

}
