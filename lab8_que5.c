#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int power1(int n){
	if(n==0){
		return 1;		
	}	
	else{
		int prod = 1,i=0;
		for(i=0;i<n;i++){
			prod = prod*10;
		}
		return prod;
	}
}
void swap(int *x,int *y){
	int r = *x;
	*x = *y;
	*y = r; 
}
void sort(int a[],int n){
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}
int main(){
int n,i=0,cnt=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
sort(a,n);
int b[n];
int c[n];
int g=0,g2=0;
for(i=0;i<n;i++){
	if(i%2==0){
		b[g]=a[i];
		g++;
	}
	else{
		c[g2]=a[i];
		g2++;
	}
}
int sum1=0,sum2=0;
for(i=0;i<g;i++){
	sum1 = sum1+(b[i]*power1(g-1-i));
}
printf("sum1: %d\n",sum1);
for(i=0;i<g2;i++){
	sum2 = sum2 + (c[i]*power1(g2-1-i));
}
printf("sum2: %d\n",sum2);
printf("final sum: %d",sum1+sum2);
}	

