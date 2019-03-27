#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum=0;
int find_min(int a[],int l,int r){
	int min = 100000;
	int i=0;
	int j;
	for(i=l;i<=r;i++){
		if(a[i]<min){
			j=i;
			min = a[i];
		}
	}
	return j;	
}
void calc(int a[],int l,int r){
	int i=0;
	if(l<r){	
		int y = find_min(a,l,r);		
		for(i=1;i<=((r-y+1)*(y-l))+(r-y)+1;i++){
			sum = sum + a[y];
		}
		calc(a,l,y-1);
		calc(a,y+1,r);		
	}
	else if(l==r){
		sum=sum+a[l];
	}
}
int main(){
int n,i=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
calc(a,0,n-1);
printf("%d",sum);
}	

