#include <stdio.h>
#include <string.h>
char ch[100050];
int main(void){
    int len,i,upper1,upper2,low1,low2;
    while(scanf("%s",ch) != EOF){
            upper1 = 0;upper2 = 0;low1=0;low2=0;
            len = strlen(ch);
            for(i=0;i<len;i++){
                if('a'<=ch[i] &&ch[i] <='z'){
                              if(low1 == 0)
                                      low1 = i+1;
                              else if(low2 == 0)
                                      low2 = i+1;
                                      }
                 else{
                              if(upper1 == 0)
                                      upper1 = i+1;
                              else if(upper2 == 0)
                                      upper2 = i+1;
                                      }
            }
            if(len == 1)
                   printf("1\n");
            else if(len == 2 || (upper2 >0 && low2>0)||upper1 == 0 && low2>0||low1 == 0 && upper2>0)
                   printf("-1\n");
            else if(upper2 == 0)
                   printf("%d\n",upper1);
            else if(low2 == 0)
                   printf("%d\n",low1);
                   }
                   return 0;
                   }    
