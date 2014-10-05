#include <stdio.h>
#include <stdlib.h>
#define MAXLINES 50000
long int a[MAXLINES]={0},b[MAXLINES] = {0};
FILE * fp;

int main(void){
	long int temp;
	int i,n;
 	fp = fopen("prz.in","r");
       	fscanf(fp,"%d",n);
	for (i =0;i<n;i++){
		fscanf(fp,"%d %d",&a[i],&b[i]);
	fclose(fp);
	fp2 = fopen("pre.out","w");

	
