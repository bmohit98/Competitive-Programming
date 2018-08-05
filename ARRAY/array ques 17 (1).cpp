#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,i,k,temp;
	cout<<"please enter array size";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n;i=i+2){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
}
	
