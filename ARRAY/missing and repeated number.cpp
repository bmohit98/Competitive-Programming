#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int a,i,j,start,count,flag=0;
	int k;
	cout<<"please enter array size";
	cin>>n;

	int arr[n];
	for(i=1;i<=n;i++){
		cin>>a;
		arr[i]=a;
	}
	for (i=1;i<=n;i++){
		k=abs(arr[i]);
		if(arr[k]>0)
		  arr[k]=-arr[k];
		else
			cout<<"repeated number is="<<k<<"\n";	
	}
	for (i=1;i<=n;i++){
		//cout<<arr[i];
		if(arr[i]>0)
		 cout <<"missing number is ="<<i;
	}
}
