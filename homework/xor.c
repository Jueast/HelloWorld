#include <stdio.h>
#define SIZE 1000
void qsort(int s[],int l,int h);
int main(void){
	int a[SIZE],n=0,i;
	char ch;
	for(i=0;i<2;i++){
	   do{scanf("%d",&a[n++]);
            }while(getchar() != '\n');// a usefule way to input unknown number of datas; 
    }
    qsort(a,0,n-1);
    for(i=0;i<n-1;i++){
        if(a[i] != a[i+1])
                printf("%d ",a[i]);
        else
            i++;
    }
    if (i == n-1)
       printf("%d",a[i]);//deal with the strange the last point;
    printf("\n");
    system("pause");
    return 0;
}
void qsort(int s[],int l,int h){
     int i=l,j=h;
     int pivot = s[i];
     if (i<j){
        while(i<j){
                   while(pivot > s[j] && i<j)
                            j--;
                   if (i<j)
                      s[i++] = s[j];
                   while(pivot < s[i] && i<j)
                            i++;
                   if(i<j)
                          s[j--] = s[i];
                   }
        s[i] = pivot;
        qsort(s,l,i-1);
        qsort(s,i+1,h);
        }
}
