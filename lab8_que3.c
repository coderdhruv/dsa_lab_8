#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top = -1;
char stack[10000];
void pop(){
	if(top!=-1){
		top=top-1;
	}
}
void push(int key){
	if(top<10000){
		stack[++top] = key;
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
char topOfStack(){
	return stack[top];
}
int main(){
	int cnt=0,i=0;
	char s[10000];
	scanf("%s",s);	
	for(i=0;i<strlen(s);i++){
		if(isEmpty()==1){
			push(s[i]);
		}
		else if((topOfStack()=='['&&s[i]==']')||(topOfStack()=='{'&&s[i]=='}')||(topOfStack()=='('&&s[i]==')')){
			pop();
		}
		else{
			push(s[i]);
		}				
	}
	if(isEmpty()){
		printf("true");
	}
	else{
		printf("false");
	}
	
}
