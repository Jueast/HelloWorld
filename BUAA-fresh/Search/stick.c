#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int n,stick[SIZE],mark[SIZE],l,num;
int dps(int m,int len,int pos);
int cmp(const void *a,const void *b);
int main(void){
	int i,sum=0;
	scanf("%d",&n);
	while(n != 0){
        sum = 0;
		memset(stick,0,sizeof(stick));
		memset(mark,0,sizeof(mark));//clear the all.
		for(i=0;i<n;i++)
			scanf("%d",&stick[i]);
		qsort(stick,n,sizeof(stick[0]),cmp);
		for(i = 0;i<n;i++){
          sum += stick[i];}
        for(l= stick[0];l<=sum;l++){//1.the good strctured can help us to think better solution.
          if (sum%l != 0) continue;//2.the lenth must be num*lenth = sum
          num = sum / l;//get the num
          if(dps(0,0,-1)){
		                 printf("%d\n",l);
                         break;}
                         }
		scanf("%d",&n);
	}
	//system("pause");
	return 0;
}
int cmp(const void *a,const void *b){
    return -(*(int *)a - *(int * )b);
} 	
		

int dps(int m,int len,int pos){//the num of formed previous stick, the lenth rest of the stick now,the test pos
    int i;
    if (m == num) return 1;
    for(i = pos +1;i<n;i++){
           if(mark[i]) continue;
           if(len + stick[i] == l){
                  mark[i] = 1;
                  if (dps(m+1,0,-1)) return 1;//to next stick and search from the head
                  mark[i] = 0;
                  return 0;// 3.if it cannot solve the problem the small thing so.
           }
           else if(len + stick[i] < l){
                mark[i] = 1;
                if(dps(m,len+stick[i],i)) return 1;
                mark[i] = 0;
                if(len == 0) return 0;// 4.if it start,that the previous is bad.   
                while(stick[i] == stick[i+1])i++;//5.skip the same
                }
                }
    return 0;
}
