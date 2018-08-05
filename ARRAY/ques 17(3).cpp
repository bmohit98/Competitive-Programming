#include<iostream>
using namespace std;
int main(){
	int n,i,j,temp;
	cout<<"please enter array size";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=n-1;i>0;i--){
		j=n-i;
		while(j){
			if(arr[j-1]<arr[i+j-1]){
				cout<<i;
				exit(0);
			}
			j--;
			
		}
	}
	cout<<"-1";
}
	
