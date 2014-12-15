#include <stdio.h>
#define min(a,b) (a>b?(b):(a))
char chess[1005][1005];
long long int way[1005][1005];
int counterx[1005][1005];
int countery[1005][1005];
int tempx[1005][1005];
int tempy[1005][1005];
int main(void){
	int i,j,m,n,counter=0;
	long long int result;
	//freopen("out1.out","w",stdout);
	//freopen("data.in","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF){
		memset(chess,0,sizeof(chess));
		memset(way,0,sizeof(way));
		memset(counterx,0,sizeof(counterx));
		memset(countery,0,sizeof(countery));
		memset(tempy,0,sizeof(tempy));
		memset(tempx,0,sizeof(tempx));
		result =0;
		for(i=0;i<n;i++)
			scanf("%s",chess[i]);
		for(i=1;i<m;i++){
			if (chess[0][i] != chess[0][i-1]){
				way[0][i] = i;
				counterx[0][i] = i;
                tempx[0][i] = 0;}
			else{
				way[0][i] = way[0][i-1];
				counterx[0][i] = counterx[0][i-1];
                tempx[0][i]++;}
		}
		for(i=1;i<n;i++){
			if (chess[i][0] != chess[i-1][0]){
				way[i][0] = i;
				countery[i][0]=i;
                tempy[i][0] = 0;}
			else{
				way[i][0] = way[i-1][0];
				countery[i][0] = countery[i-1][0];
                tempy[i][0]++;}
		}
		for(i=1;i<n;i++){
			for(j=1;j<m;j++){
               countery[i][j]=  (chess[i][j] != chess[i-1][j])?i:countery[i-1][j];
               tempy[i][j] = (chess[i][j] != chess[i-1][j] || chess[i][j] != chess[i-1][j-1])?0:tempy[i-1][j]+1;
               counterx[i][j]=  (chess[i][j] != chess[i][j-1])?j:counterx[i][j-1];
               tempx[i][j] = (chess[i][j] != chess[i][j-1]|| chess[i][j] != chess[i-1][j-1])?0:tempx[i][j-1]+1;
            }
        }
		for(i=1;i<n;i++){
			for(j=1;j<m;j++){
				if(chess[i][j] != chess[i-1][j]){
					if(chess[i][j] != chess[i][j-1]){
                         way[i][j] = (i+1)*(j+1) - 1;}
                    else{
                        way[i][j] = i*(j+1) + counterx[i][j];}
                 }
				else{
                    if(chess[i][j] == chess[i][j-1]){
                          if(chess[i][j] != chess[i-1][j-1])
                                       way[i][j] = i*j + counterx[i][j] +countery[i][j];
                          else
                                       way[i][j] = i*j + counterx[i][j] +countery[i][j] -tempx[i][j]*tempy[i][j];}
                    else{
                         way[i][j] = (i+1)*j +countery[i][j];}                       
    			}
          }
          }
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
                printf("w:%lld tx:%d ty:%d||",way[i][j],tempx[i][j],tempy[i][j]);
				result += way[i][j];
                }
            printf("\n-------------------------------------------------\n");
}
		printf("case%d: %lld\n",counter++,result);
	}
	return 0;
}
	
