#include<iostream>
#include<string>
using namespace std;
void combination(int arr[],int data[],int start,int end ,int k,int point ){
	if(point==k){
		for(int i=0;i<k;i++){
			cout<<data[i]<<" ";
		}
		cout<<"\n";
		return ;
	}
	for(int i=start;i<=end;i++){
		data[point]=arr[i];
		combination(arr,data,i+1,end,k,point+1);
	}
}
int main(){
	int n,k;
	cin>>n;
	cout<<"enter element";
	cin>>k;
	int data[k];
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	combination(arr,data,0,n-1,k,0);

}

