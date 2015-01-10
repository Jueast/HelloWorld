#include <stdio.h>
#include <string.h>
void out(char result[],int p);
void reverse(char a[]);
void multi(char a[],int n);
int atoi(int a[],char b[]);
void intcpyk(int a[],int b[],int lt);
char result[1000];
char s[10];
int n;
int main(void){
	int i,j=0,p,l;
	char temp[10];
	//freopen("suck.in","r",stdin);
	//freopen("suck.out","w",stdout);
	while(scanf("%s%d",s,&n)!=EOF){
		memset(result,0,sizeof(result));
		j=0;
		for(i=0;i<6;i++){
			if(s[i] == '.')
			       p = 5-i;
			else 
			   temp[j++] = s[i];
		}
		temp[j] = '\0';
		p *= n;
		multi(temp,n);
		out(result,p);
	} 
	return 0;
}
void reverse(char a[]){
	int i,j;char temp;
	for(i=0,j=strlen(a)-1;i<j;i++,j--){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	return;
}
int atoi(int a[],char b[]){
	int i,l=strlen(b);
	for(i=0;i<l;i++)
		a[i] = b[i] - '0';
	return l;
}
void intcpyk(int a[],int b[],int l){
	int i;
	for(i=0;i<l;i++)
          a[i] = b[i];
}
void multi(char a[],int n){
	int i,j,k,lt,la;
	int r[1002]={0},temp[1002]={0},num[1002]={0};
	char ka[10];
	if(strcmp(a,"000000")==0 || strcmp(a,"00000")==0){
	     strcpy(result,"0");
	     return;
    }
	if(n==0){
			strcpy(result,"1");
			return;
    }
    if(n==1){
    	 la = strlen(a);
    	 for(i=0;i<la;i++)
		    if(a[i] != '0')
		    		break;
		 strcpy(result,&a[i]);
         return;
    }
    strcpy(ka,a);
    reverse(ka);
    lt = la = atoi(num,ka);
    atoi(r,ka);
    for(i=1;i<n;i++){
    	intcpyk(temp,r,lt);
		memset(r,0,sizeof(r)); 
    	for(j=0;j<lt;j++)
    		for(k=0;k<la;k++)
		        r[j+k] += temp[j] * num[k];
		lt = lt+la-1;k=0;
		while(k<lt||r[k] != 0){//jinwei
			if (r[k]>=10){
			   r[k+1] += r[k] / 10;
			   r[k] = r[k] % 10;
            }
            k++;
		}
		lt = k;
	}
	for(i=0;i<lt;i++){
		result[i] = r[i] + '0';
	}
	result[lt] = '\0';
	reverse(result);
	for(i=0;i<lt;i++){
		if(result[i] != '0')
	      break;
	}
	strcpy(result,&result[i]);
}
void out(char result[],int p){
	int i,l,state=0;
	char temp[3000]={0};
	if(strcmp(result,"0")==0){
		printf("0\n");
		return;
	}
 	state=l=strlen(result);
	for(i=0;i<p;i++){//judge whether the number is int or not
		if(result[l-1-i] != '0'){
			break;
		}
		state--;
	}
	strcpy(temp,result);
	if(p<l){
			strcpy(temp,result);
			if(state == l-p)
		         temp[l-p] = '\0';
			else{
				 temp[l-p] = '.';
		   		 temp[l-p+1] = '\0';
				 strcat(temp,&result[l-p]);
				 temp[state+1] = '\0';
		    }
	}
    else{
    	 	state = l - state;//the positon from right.
	 	    temp[0] = '.';
    		for(i=1;i<1+p-l;i++)
		         temp[i] = '0';
	        temp[i] = '\0';
	        strcat(temp,result);
	        temp[1+p-state] = '\0';               
	}
	printf("%s\n",temp);
}


