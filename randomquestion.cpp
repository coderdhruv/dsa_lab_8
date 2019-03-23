#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if((s[i]-48)%2 == 0){
			sum=sum+(i+1);
		}
	}
	cout<<sum;
}
