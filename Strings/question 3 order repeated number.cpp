#include<iostream>
using namespace std;
int main(){
	int n;
	int i,xor1=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		xor1 = xor1 ^ arr[i];	
	}
	cout<<xor1;
}
