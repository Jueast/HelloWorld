/*
ID:eastern3
LANG:C
TASK:ride
*/
#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(void){
	FILE *fin = fopen("ride.in","r");
	FILE *fout = fopen("ride.out","w");
	char comet[SIZE],group[SIZE];
	int c=1,g=1,i;
	fscanf(fin,"%s",comet);
	fscanf(fin,"%s",group);
	for(i=0;i<strlen(comet);i++){
            c *= comet[i] - 'A' + 1;
            }
    for(i=0;i<strlen(group);i++){
            g *= group[i] - 'A' + 1;
            }
    if(c % 47 == g % 47)
         fprintf(fout,"GO\n");
    else
         fprintf(fout,"STAY\n"); 
	return 0;
}

