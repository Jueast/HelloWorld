#include <stdio.h>
int queue[200000],counter[200000],mark[100000]={0};
int main(void){
	int N,K;
	scanf("%d%d",&N,&K);
	printf("%d\n",bfs(N,K));
	system("pause");
	return 0;
}
int bfs(int N,int K){
    int head=0,tail=1;
    queue[head] = N;
    counter[head] = 0;
	while(head<tail){
            if (queue[head] == K )
                            return counter[head];
            if(queue[head] * 2<=100000 && mark[queue[head]*2] == 0){ 
			               queue[tail] = queue[head] * 2;
		                   counter[tail++] = counter[head] + 1;
                           mark[queue[head]*2] = 1;}
            if(queue[head] +1<=100000&& mark[queue[head]+1] == 0){
			               queue[tail] = queue[head] + 1;
			               counter[tail++] = counter[head] + 1;
                           mark[queue[head]+1] = 1;}
			if((queue[head] - 1)>=0 && mark[queue[head]-1] == 0){
			                queue[tail] = queue[head] - 1;
			                counter[tail++] = counter[head] + 1;
                            mark[queue[head]-1] = 1;}
		head++;}
}

