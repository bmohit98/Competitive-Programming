#include<iostream>
using namespace std;
int oneindex(int arr[],int size){
	int flag=0;
	for(int i=0;i<size;i++){
		
		if(arr[i]==0)
			flag++;
		else if(arr[i]!=1 && arr[i]!=0)
			return -2;
		else if(arr[i]==1)
			return i;
	}
	if(flag==size)
		return -1;
}
int main(){
	int n;
	int a,i;
	int k;
	cout<<"please enter array size";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		arr[i]=a;
	}
	k=oneindex(arr,n);
	if(k==-1)
		cout<<"all elements are zeros";
	else if(k==-2)
		cout<<"in array element is other then 0 or 1";
	else
		cout<<"first 1 occurrence at "<<k;	
	return 0;	
}	
