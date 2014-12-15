#include <stdio.h>
#include <string.h>
char ch[100050] ={0};
int main(void){
	int i,nl=0,nu=0,il= -1,iu = -1;
	while(scanf("%s",ch) != EOF){
		nl=-1;nu=-1;il= -1;iu = -1;
		for(i=0;i<strlen(ch);i++){
			if ('A'<=ch[i] && ch[i]<='Z'){
				if(iu <0)
					iu = i+1;
				else if(nu < 0)
				    nu = i+1;
			}
			else{
				if(il < 0)
					il = i+1;
				else if(nl < 0)
				    nl = i+1;
			}
			if(nl >0  &&nu >0 )
				break;
		}
		if(strlen(ch) == 1)
             printf("-1\n");
        else if(nl * iu * nu * il > 0)
             printf("-1\n");
        else if(nu < 0)
             printf("%d\n",iu);
        else if(nl < 0)
             printf("%d\n",il);
        
        }
	return 0;
}


