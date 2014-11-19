#include <stdio.h>
int digits2[100],digits1[100];
int main(void){
	int m,s,i,temp1,temp2;
	scanf("%d%d",&m,&s);
	temp1 = s-1;temp2 = s;
    for(i=0;i<m;i++){
          digits2[i] = 9<temp2?9:temp2;
          temp2 -= digits2[i];
          }
    for(i=m-1;i>=0;i--){
          digits1[i] = 9<temp1?9:temp1;
          temp1 -= digits1[i];}
    if(digits1[0] == 0)
                  digits1[0] = 1;
    else
        digits1[0]++;
    if(temp2 > 0 || digits2[0] == 0 && m != 1)
             printf("-1 -1");
    else{
        for(i=0;i<m;i++)
               printf("%d",digits1[i]);
        printf(" ");
        for(i=0;i<m;i++)
               printf("%d",digits2[i]);         
}
      
	//system("pause");
	return 0;
}

