#include<iostream>
#include<math.h>
using namespace std;
int bsearch(int arr[],int start,int end,int value)
{
	int mid;
	if(start<=end){
	
	mid=start+(end-start)/2;
	
	if(arr[mid]==value)
		return mid;
	else if(arr[mid]>value)
		return bsearch(arr,start,mid-1,value);
	else
		return bsearch(arr,mid+1,end,value);
	
	}
	return -1;	
}
int main(){
	int n;
	int a,i,index;
	int k;
	cout<<"please enter array size";
	cin>>n;
	cout<<"searching value";
	cin>>k;
	int arr[n];
	for(i=1;i<=n;i++){
		cin>>a;
		arr[i]=a;
	}
	index=bsearch(arr,0,n,k);
	if(index==-1)
		cout<<"element does not exit";
	else	
     	cout<< index;
	
}
	
