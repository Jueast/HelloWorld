#include <stdio.h>
#include <math.h>
#define SIZE 100005
char s[SIZE],mark[SIZE] = {0};
int main(void){
	int n,p,i,counter=0,j,big,small,t,left,right,state = 1;
	scanf("%d%d",&n,&p);
	for(i=0;i<n;i++){
		scanf(" %c",&s[i]);
	}//for(i=0;i<n;i++){
	//printf("%c\n",s[i]);}
	for(i=0,j=n-1;i<=j;i++,j--){
		if(s[i] == s[j]){
			mark[i] = 1;
			mark[j] = 1;
		}
		else
            counter += min(abs(s[i] - s[j]),26-abs(s[i] - s[j]));
	}
	if (p>n/2){
		left = (n/2)+1;
		right = n;
	}
	else{
		left = 1;
		right = n/2;
	}
	p -= 1;
	big = small =0;
    for(i=left-1;i<=right-1;i++){
    	if(mark[i] == 0){
            if(state){
    		 big = i;
   		     small = i;
             state = 0;}
            else
             big = i;
    	}
    }
    if(state)
           t = 0;
    else
        t =(abs(big - p) > abs(small - p)?abs(small - p):abs(big - p));
    counter += big - small +t;
    printf("%d\n",counter);
    //system("pause");
    return 0;
}
int min(a,b){
	return a>b?b:a;
}
int max(a,b){
	return a<b?b:a;
}
int distance(a,b,n){
	return min(abs(a-b),n-abs(a-b));
}
