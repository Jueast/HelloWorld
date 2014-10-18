#include <stdio.h>
int main(void){
	int Ax1,Ay1,Ax2,Ay2,Bx1,By1,Bx2,By2;
	scanf("%d%d%d%d%d%d%d%d",&Ax1,&Ay1,&Ax2,&Ay2,&Bx1,&By1,&Bx2,&By2);
	printf("%d\n",overlaped(Ax1,Ax2,Bx1,Bx2)*overlaped(Ay1,Ay2,By1,By2));
	system("pause");
	return 0;
}
int overlaped(int Ax1,int Ax2,int Bx1,int Bx2){
	if (min((max(Ax1,Ax2)),(max(Bx1,Bx2))) > max((min(Ax1,Ax2)),(min(Bx1,Bx2))))
		return ((min((max(Ax1,Ax2)),(max(Bx1,Bx2)))) - (max((min(Ax1,Ax2)),(min(Bx1,Bx2)))));	//judge the range of overlap
	else
		return 0;
}
int max(int a,int b){
    return a>b?a:b;}
int min(int a,int b){
    return a<b?a:b;}
