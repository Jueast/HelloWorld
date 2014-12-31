#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
int main(void){
	int num[35000],order[35000]={0};
	int n,i,ans,temp,m;
	scanf("%d",&n);
	memset(num,0,sizeof(num));
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		num[temp]++;
		order[temp] = (order[temp] == 0)?i:order[temp];
	}
	//qsort(num,0,n-1);
	ans = 0;
	for(i=0;i<35000;i++){
		if (num[i] > num[ans])
			ans = i;
		else if (num[i] == num[ans])
			ans = (order[i] < order[ans] && order[i] != 0)?i:ans;
	}
	printf("%d\n",ans);
	system("pause");
	return 0;
}
/*void hqsort(int num[],int l,int h){
	int i=l,j=h,pivot;
	if(l>h)
		return;
	pivot = num[l];
	while(i<j){
		while(num[j] > pivot && i<j)
			j--;
		if(i<j){
			num[i++] = num[j];}
		while(num[i] < pivot && i<j)
			i++;
		if(i<j){
			num[j--] = num[i];}
	}
	num[i] = pivot;
	hqsort(num,l,i-1);
	hqsort(num,i+1,h);
}*/
