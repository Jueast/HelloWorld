#include <stdio.h>
#define MAX_N 100
#define MAX_M 100
int M,N,res;
char f[MAX_N][MAX_M+1];
int main(void){
    int i,j;
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++)
		scanf("%s",f[i]);

	res = 0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if (f[i][j]=='W'){
				dfs(i,j);
				res++;
            }
         }
        }
	printf("%d\n",res);
		/*for(i=0;i<N;i++){
		for(j=0;j<M;j++){
           printf("%c",f[i][j]);}
        printf("\n");
        }*/
	system("pause");
	return 0;
}
int dfs(int x,int y){
	f[x][y] = '.';
	int dx,dy;
	for(dx = -1;dx<= 1;dx++){
		for( dy = -1;dy<=1;dy++){//move the finder dx and dy;
			int nx = x + dx;
			int ny = y + dy;
			if (0<=nx && nx<N && 0<=ny && ny<M && f[nx][ny] == 'W') 
				dfs(nx,ny);
		}
 
    }
}


