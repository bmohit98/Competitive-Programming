#include<iostream>
#include<math.h>
using namespace std;
int bsearcha(int arr[],int start,int end,int value)
{
	int mid;
	if(start<=end){
	
	mid=start+(end-start)/2;
	
	if(arr[mid]==value)
		return mid;
	else if(arr[mid]>value)
		return bsearcha(arr,start,mid-1,value);
	else
		return bsearcha(arr,mid+1,end,value);
	
	}
	return -1;	
}
int main(){
	int n,f;
	int a,i,index,first,last;
	int k;
	cout<<"please enter array size";
	cin>>n;
	
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		arr[i]=a;
		
	}
	f=n/4;
	for(i=0;i<n;i=i+f){
	 k=arr[i];	
	index=bsearcha(arr,0,n-1,k);
	first=index;
	last=index;
	while(arr[first]==arr[first-1]){
		first=bsearcha(arr,0,first-1,k);
	}
	while(arr[last]==arr[last+1]){
		if(last<n)
		last=bsearcha(arr,last+1,n-1,k);
	}
	if((last-first+1)>=n/4){
		cout<<k<<"\n";
	}
	
}
}
