#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int a,i,j,flag=0;
	int k;
	cout<<"please enter array size";
	cin>>n;
	cout<<"enter the k";
	cin>>k;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		arr[i]=a;
	}
	for(i=0;i<n;i++){		
		for(j=i+1;j<n;j++){
			if(abs((arr[i]-arr[j]))==k)
				cout<< arr[i]<<","<<arr[j]<<"\n";
		}
	}
	return 0;
}
