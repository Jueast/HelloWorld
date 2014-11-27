#include <stdio.h>
#include <stdlib.h>
int judge(int s[]);
int cmp(const void *a,const void *b);
int main(void){
	int i,n,boxes[10]={0},temp,state=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&boxes[i]);
	}
	qsort(boxes,n,sizeof(boxes[0]),cmp);
	if(n==1){
        state = 1;
        boxes[1] = 3*boxes[0];
        boxes[2] = boxes[0];
        boxes[3] = boxes[1];
        }
    else if(n == 0){
         boxes[0] = 1;
         boxes[1] = 1;
         boxes[2] = 3;
         boxes[3] = 3;
         state =1;
}
    else if (n==2){
         if(boxes[1] /boxes[0] > 3)
                 state = 0;
         else{
           boxes[2] = 3*boxes[0];
           boxes[3] = 4*boxes[0] - boxes[1];
           state = 1;}
}
    else if (n==3){
         for(i = 1; i<=3*boxes[0];i++){
               boxes[3] = i;
               if(judge(boxes)){
                   state = 1;
                   break;
                   }
                   }
}
    else 
         state = judge(boxes);           
	if(state){
		printf("YES\n");
		for(i=n;i<4;i++)
			printf("%d\n",boxes[i]);
	}
	else
		printf("NO\n");
	//system("pause");
	return 0;
}
int judge(int s[]){
	int i,temp[4];
    double mean,median,range;
	for(i=0;i<4;i++)
        temp[i] = s[i];
	qsort(temp,4,sizeof(s[0]),cmp);
	mean = (temp[0] + temp[1] + temp[2] +temp[3])/4.0;
	median = (temp[1] + temp[2])/2.0;
	range =(temp[3] - temp[0]);
	return (mean == median) && ( mean == range);
}
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
	
	
