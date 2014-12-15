#include <stdio.h>
#include <string.h>
#define max(a,b) (((a)>(b))?(a):(b))
char a[105],b[105];
int dp[105][105][105];
int main(void){
	int k,i,lena,lenb,j,e,ma,mb,result;
	while(scanf("%s",a) != EOF){
		scanf("%s",b);
		scanf("%d",&k);
		result = 0;ma=0;mb=0;
		ma = dplan(a,b,k);
		mb = dplan(b,a,k);
		result = max(ma,mb);
		printf("%d\n",result);
	}
	return 0;

}
int dplan(char a[],char b[],int k){    
        int i,j,e,lena,lenb,ma=0;
        lena = strlen(a);lenb =strlen(b);
        memset(dp,0,sizeof(dp));
		for(i=0;i<lena;i++){
			for(j=0;j<lenb;j++){
                   if (a[i] == b[j]){
                      for(e=0;e<=k;e++)
					     dp[i+1][j+1][e]= dp[i][j][e] + 1;
                  }
                   else{
                      for(e=1;e<=k;e++)
                          dp[i+1][j+1][e-1] = dp[i+1][j][e];
                  }
          }
        }
        for(i=0;i<lena;i++){
            for(j=0;j<=k;j++){
              ma = max(ma,dp[i+1][lenb][j]);}} 
        return ma;
}
