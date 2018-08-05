#include<iostream>
using namespace std;
int main(){
	int n;
	int a,i,j,start,count,flag=0;
	int sum;
	cout<<"please enter array size";
	cin>>n;
	cout<<"enter the sum";
	cin>>sum;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>a;
		arr[i]=a;
	}
	
	for(i=0;i<n;i++){
		a=sum-arr[i];
		start=i;
		count=0;
		j=i+1;
		
		while(a!=0 && j<n){
			count++;
			a=a-arr[j];
			if(a<arr[j])
				break;
			
			j++;
			
		}
	if(a==0){
	cout<<"sum found between indexes"<<start<<"and"<<start+count<<"\n";	
	flag=1;
	}
	}
	if(flag==0)
	cout<<"no subset";
	return 0;
}
	
