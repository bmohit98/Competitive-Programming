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
	int n;
	int a,i,index,first,last;
	int k;
	cout<<"please enter array size";
	cin>>n;
	cout<<"searching value";
	cin>>k;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		arr[i]=a;
	}
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
	cout<<last-first+1;
	
	
}
