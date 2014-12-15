#include <stdio.h>
#include <stdlib.h>
int a[100050],flags[2000500],result[100050];
int cmp(const void *m,const void *k);
int x,y;
int main(void){
	int n,i,temp,disx,disy;
	scanf("%d%d%d",&n,&x,&y);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	flags[0] = 0;disx = y;disy = x;
	for(i=1;i<x+y;i++){
		if (disx == disy){
			flags[i] = 0;
			flags[i+1] = 0;
			i++;}
		else
			flags[i] = disx>disy?2:1;
		if (flags[i] == 0){
			disx = y;
			disy = x;
		}
		else if(flags[i] == 1){
			disy -= disx;
			disx = y;
		}
		else{
			disx -= disy;
			disy = x;
		}
	}
	for(i=0;i<n;i++){
		temp = flags[a[i] % (x+y)];
		switch(temp){
			case 0:printf("Both\n");break;
			case 1:printf("Vanya\n");break;
			case 2:printf("Vova\n");break;
		}
	}
	//system("pause");
	return 0;
}



