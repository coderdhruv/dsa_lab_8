#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int matrix[n][n];
int i=0,j=0,k=0,l=0,m=0,o=0;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&matrix[i][j]);
	}
}
int cnt=0;
for(i=0;i<n;i++){
	for(j=i;j<n;j++){
		for(k=0;k<n;k++){
			for(l=k;l<n;l++){				
				int cnt1 = 0;
				for(m=i;m<=j;m++){
					for(o=k;o<=l;o++){
						if(matrix[m][o]==1){
							cnt1++;	
						}
					}										
				}
				if(cnt1==1){
					cnt++;
				}
			}
		}
	}
}
printf("%d",cnt);
}
