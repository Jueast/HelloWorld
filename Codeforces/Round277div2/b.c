#include <stdio.h>
#define SIZE 100
int B[100][100],MARK[100][100] = {0};
int main(void){
	int m,n,i,j,state=1,substate = 0,sum =0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&B[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(B[i][j] == 1 && MARK[i][j] == 0){
				if(! judge(i,j,m,n)){
					state = 0;
					goto here;
				}
			}
		}
	}
	here:;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
             sum += MARK[i][j];
             if(MARK[i][j] == 2){
                    substate = 1;
                    break;
             }
        }
     }
             
	if(! state || (substate == 0 && sum != 0))
		printf("NO\n");
	else{
		printf("YES\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(MARK[i][j] == 2)
					printf("1 ");
				else
					printf("0 ");
			}
			printf("\n");
		}
	}
	//system("pause");
	return 0;

}
int judge(a,b,m,n){
	int i,statey = 1,statex = 1;
	for(i=0;i<m;i++){
		if (B[i][b] == 0){
			statey = 0;
			break;
		}
	}
	if(statey){
		for(i=0;i<m;i++)
			MARK[i][b]++;
	}
	for(i=0;i<n;i++){
		if (B[a][i] == 0){
			statex = 0;
			break;
			}
	}
	if(statex){
		for(i=0;i<n;i++)
			MARK[a][i]++;
	}
	MARK[a][b] = statex + statey;
	return statex || statey;
}
