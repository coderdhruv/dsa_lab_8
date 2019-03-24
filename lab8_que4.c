#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int n,k,i=0,cnt=0;
scanf("%d %d",&n,&k);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int b[n];
for(i=0;i<n;i++){
	b[i] = a[i];
}
sort(a,n);	
	if(a[0]<k){	
		while(a[0]<k){			
			a[0] = a[0] + 2*a[1];
			cnt++;
			for(i=1;i<n-cnt;i++){
				a[i] = b[i+cnt];
			}			
			sort(a,n-cnt);
		}
	}
	else{
		cnt=0;
	}
	printf("%d",cnt);

}	

