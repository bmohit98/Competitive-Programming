#include<iostream>
using namespace std;
int main(){
	int n;
	int i,xor1=0,j=0;
	cin>>n;
	int arr[n-1];
	for(i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(i=1;i<=n;i++){
		xor1^=i;	
	}
	for(i=0;i<n-1;i++){
		xor1^=arr[i];	
	}
	cout<<xor1;
}
