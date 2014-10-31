#include <stdio.h>
#include <string.h>
#define SIZE 101//when saving str must enlarge the size
int main(void){
    int n,i;
    char s[SIZE][SIZE];
    scanf("%d",&n);
    for(i=0;i<n;i++)
                    scanf("%s",s[i]);
    for(i=0;i<n;i++){
               if (strlen(s[i]) > 10){
                             printf("%c",s[i][0]);
                             printf("%d",strlen(s[i])-2);
                             printf("%c\n",s[i][strlen(s[i])-1]);
                             }
               else 
                    printf("%s\n",s[i]);
} 
    //system("pause");
    return 0;
}
