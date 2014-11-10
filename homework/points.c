#include <stdio.h>
#include <math.h>
int xaxis[15],yaxis[15];
double areacal(int i);
double triangle(int a,int b,int c);
int main(void){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&xaxis[i],&yaxis[i]);
	}
	printf("%.2f\n",areacal(n-1));
	//system("pause");
	return 0;
}
double areacal(int i){
	if(i == 2){
		return triangle(0,2,1);//return the area the last triangle;
	}
	else 
		return areacal(i-1) + triangle(0,i,i-1);//recursively implement.
}
double triangle(int a,int b,int c){
	double side[3],p=0,area;
	side[0] = sqrt(pow(((double)xaxis[a]-xaxis[b]),2) + pow(((double)yaxis[a]-yaxis[b]),2));
	side[1] = sqrt(pow(((double)xaxis[b]-xaxis[c]),2) + pow(((double)yaxis[b]-yaxis[c]),2));
	side[2] = sqrt(pow(((double)xaxis[c]-xaxis[a]),2) + pow(((double)yaxis[c]-yaxis[a]),2));
	p = (side[0] + side[1] + side[2])/2.0;
	area = sqrt(p * (p-side[0]) * (p-side[1]) * (p - side[2]));
	return area;
}
