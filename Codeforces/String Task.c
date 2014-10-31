#include <stdio.h>
#include <string.h>
#define SIZE 101
int main(void){
    char s[SIZE];
    int i,j;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
           if('A'<= s[i] && s[i] <= 'Z')
                    s[i] += 'a' - 'A';
           if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' 
           ||s[i] == 'e'  || s[i] == 'u'|| s[i] == 'i')
                  continue;
           else{
               printf(".");
               printf("%c",s[i]);
               }
     }
    //system("pause");    
    return 0;
          
}    
    
