#include <stdio.h>
#include <stdlib.h>
#define SIZE 400001
long  int s[SIZE] = {0};
int flags[SIZE] = {0};// a function reflecting input order to data order
long int n;
int flagcmp(const void *a, const void *b );
int main(void){
	long int i,pointer;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&s[i]);
		flags[i] = i;}
		//printf("%ld ",s[i]);}
	qsort(flags,n,sizeof(flags[0]),flagcmp);
	pointer = s[flags[0]];
	for(i=0;i<n;i++){
        if (s[flags[i]] > pointer){
                pointer = s[flags[i]] +1;
                }
        else{
             s[flags[i]] = pointer;
             pointer++;
             }
             } 
    for(i=0;i<n;i++)
        printf("%ld ",s[i]);                                       
        //printf("%ld:%ld:%ld \n",flags[i],s[flags[i]],s[i]);
    //system("pause");
	return 0;
}
int flagcmp(const void *a, const void *b ){
    return(s[*(long int*)a] - s[*(long int*)b]);
}
/* void qsort(int l,int h){// quick sort the flags referring to numbers.
     long int i=l,j=h;
     long  int pivot,temp;
     if(l<h){
             pivot = flags[i];
             while(i<j){
                while(i<j && s[pivot]<=s[flags[j]])
                          j--;
                if(i<j){
                       flags[i] = flags[j];
                       i++;
                       }
                while(i<j && s[pivot]>=s[flags[i]])
                       i++;
                if(i<j){
                       flags[j] = flags[i];
                       j--;
                       }
                       }
             flags[i] = pivot ;
             qsort(l,i-1);
             qsort(i+1,h);
             }
}                                                       
*/
