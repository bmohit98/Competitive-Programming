#include<iostream>
#include<algorithm>
using namespace std;
int  combination(int arr[],int data[],int start,int end ,int k,int point ){
	if(point==k){
		int sum=0;
		for(int i=0;i<k;i++){
			sum=sum+data[i];
		}
		if(sum%3==0){
			cout<<"hello";
			return 1;
		}
	}
	for(int i=start;i<=end;i++){
		data[point]=arr[i];
		if(combination(arr,data,i+1,end,k,point+1)!=0){
			for(int j=i+1;j<=end;j++)
				cout<<data[j];
			cout<<"\n";
			exit(0);
		}
	}
	return 0;
}
int largestnumber(int arr[],int start,int size){
	if(arr[size-1]!=0){
		cout<<"No number is possible which is divisble by 2 and 5";
		return -1;
	}
	for(int i=size-1;i>0;i--){
		int data[i];
		combination( arr, data,0,size-2,i,0);			
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,greater<int>());
	largestnumber(arr,0,n);
}


