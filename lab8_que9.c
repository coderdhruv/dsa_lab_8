#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
	int n;
	scanf("%d",&n);
	int a[n],i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	int diff = 0;
	int g=0;
	for(i=0;i<n;i++){
		b[i]=-1;
	}	
	for(i=0;i<n;i++){
		if(a[i]>b[0]&&b[0]!=-1){			
			diff = diff + abs(a[i]-b[0]);
			b[0]=a[i];
			sort(b,g);
		}
		else if(a[i]<b[0]&&b[0]!=-1){
			b[g]=a[i];
			g++;
			sort(b,g);
		}
		else if(a[i]==b[0]&&b[0]!=-1){
			
		}
		else if(b[0]==-1){
			b[g]=a[i];
			g++;
			sort(b,g);
		}	
	}
	printf("%d",diff);
}
