#include <stdio.h>
void spin(int martix[][9],int N,int n,int num);
int main(void){
	FILE *fp;
	int i,j,N,martix[9][9] = {0};
	scanf("%d",&N);
	spin(martix,N,0,1);
	if((fp = fopen("file.out","w")) == NULL){
		printf("Can't open file.out!");
		return 1;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			fprintf(fp,"%5d",martix[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
void spin(int martix[][9],int N,int n,int num){
	int i;
    if (n>=N/2){
       if(N%2 == 0)
              return;
       else
           martix[n][n] = num;
           return;
    }    
	for(i=n;i<N-n-1;i++)
		martix[n][i] = num++;
	for(i=n;i<N-n-1;i++)
		martix[i][N-n-1] = num++;
	for(i=N-n-1;i>n;i--)
		martix[N-n-1][i] = num++;
	for(i=N-n-1;i>n;i--)
		martix[i][n] = num++;
	spin(martix,N,n+1,num);
}
	
			
