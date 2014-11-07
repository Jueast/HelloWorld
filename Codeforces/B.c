#include <stdio.h>
long int max(long int a,long int b);
long int min(long int a,long int b);
int main(void){
    long long int area,big;
    long int x[1000],y[1000];
    int n,i,maxx,maxy,minx,miny;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
        }
    maxx = minx = x[0];
    maxy = miny = y[0];
    for(i=0;i<n;i++){
                     maxx = max(maxx,x[i]);
                     maxy = max(maxy,y[i]);
                     miny = min(miny,y[i]);
                     minx = min(minx,x[i]);
                     }
    big = max((maxx - minx),(maxy - miny));
    area = big*big;
    printf("%I64d",area);
    return 0;
}
long int max(long int a,long int b){
     return a>b?a:b;}   
long int min(long int a,long int b){
     return a<b?a:b;}   
