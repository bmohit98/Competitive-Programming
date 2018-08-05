#include<iostream>
using namespace std;
int fact(int n){
	long arr[n];
	arr[0]=1;
	for(int i=1;i<=n;i++){
		arr[i]=i*arr[i-1];
	}
	return arr[n];
}
int combination(int n,int r){
	long value;
	value=(fact(n))/(fact(n-r)*fact(r));
	return value;
	
}
int main(){
	int x,y;
	int steps=0;
	cin>>x>>y;
	int min1;
	if(x<y)
		min1=x;
	else
		min1=y;
	for(int i=0;i<=min1;i++){
		steps+=(combination(x,i)*combination(y,(min1-i)));
		
		
	}
	cout<<"no of steps: "<<steps;
}
