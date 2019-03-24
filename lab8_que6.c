#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top1 = -1;
int top2 = -1;
int stack1[10000];
int stack2[10000];
void pop1(){
	if(top1!=-1){
		top1=top1-1;
	}
}
void push1(int key){
	if(top1<10000){
		stack1[++top1] = key;
	}
}
int isEmpty1(){
	if(top1==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int topOfStack1(){
	return stack1[top1];
}
void pop2(){
	if(top2!=-1){
		top2=top2-1;
	}
}
void push2(int key){
	if(top2<10000){
		stack2[++top2] = key;
	}
}
int isEmpty2(){
	if(top2==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int topOfStack2(){
	return stack2[top2];
}
int find_min_stack1(){
	return topOfStack2();
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0,min=10000;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		push1(a[i]);
		if(a[i]<min){
			push2(a[i]);
			min = a[i];
		}
		int u = find_min_stack1();
		printf("pushed element %d \n",a[i]);
		printf("minimum element %d \n",u);
	}
	
	
}	

