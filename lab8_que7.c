#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum=0;
find_min(int a[],l,r){
	int min = 100000;
	int i=0;
	for(i=l;i<=r;i++){
		
	}
}
void calc(int a[],l,r){
	if(l==r){
		return;
	}
	else{
		int y = find_min(a,l,r);
		sum = sum + ((r-y+1)*y)+(r-y)
		calc(a,y+1,r);
		calc(a,l,y-1);
	}
}
 
int main(){
int n,i=0,cnt=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

}	

