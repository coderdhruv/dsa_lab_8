#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int n,k,i=0;
	scanf("%d %d",&n,&k);
	char light[n];
	char ch;
	scanf("%c",&ch);
	for(i=0;i<n;i++){
		scanf("%c",&light[i]);
		scanf("%c",&ch);
	}
	int cnt=0,j=0;
	for(i=0;i<n-k+1;i++){
		while(light[i]!='G'){
			printf("present value of i :%c\n",light[i]);	
			for(j=i;j<=min(n-1,i+k);j++){
				if(light[j] == 'R'){
					light[j] = 'Y';
				}
				else if(light[j] == 'Y'){
					light[j] = 'G';
				}
				else if(light[j] == 'G'){
					light[j] = 'R';
				}
			}
			cnt++;
		}		
	}
	printf("%d",cnt);
}
