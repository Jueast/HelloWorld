/*
ID:eastern3
LANG:C
TASK:transform
*/
#include <stdio.h>
char midway[15][15];int N;
void turn(char a[][15]);
void reflect(char a[][15]);
int solve(char before[][15],char after[][15]);
int main(void){
	int i,result;
	char before[15][15],after[15][15];
	freopen("transform.in","r",stdin);
	freopen("transform.out","w",stdout);
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s",before[i]);
	}
	for(i=0;i<N;i++){
		scanf("%s",after[i]);
	}
	result = solve(before,after);
	printf("%d\n",result);
	return 0;
}
int solve(char before[][15],char after[][15]){
	int i;
	turn(before);
	if(same(midway,after))
		return 1;
	turn(midway);
	if(same(midway,after))
		return 2;
	turn(midway);
	if(same(midway,after))
		return 3;
	reflect(before);
	if(same(midway,after))
		return 4;
	for(i=1;i<=3;i++){
		turn(midway);
		if(same(midway,after))
			return 5;
	}
	if(same(before,after))
		return 6;
	return 7;
}
int same(char a[][15],char b[][15]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if (a[i][j] != b[i][j]) 
				return 0;
			}
	}
	return 1;
}
void turn(char a[][15]){
	int i,j;char b[15][15];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		    b[i][j] = a[i][j];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			midway[j][N-1-i]=b[i][j];
	return;
}
void reflect(char a[][15]){
	int i,j;char b[15][15];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		    b[i][j] = a[i][j];
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			midway[i][N-1-j] = b[i][j];
	return;
}



	

