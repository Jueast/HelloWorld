#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
 	int m,n,p,q;
 	freopen("data.in","w",stdout);
 	q = 100;
	while(q--){
 		m = 1+(rand()%100);
 		n = 1+(rand()%10);
 		printf("%d %d\n",n,m);
 		for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
  	   			p = rand()%2;
  	   			if(p==1)  printf("B");
       			else printf("W");
    			}
   			 printf("\n");
 		}
	}
	return 0;
}
