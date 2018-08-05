#include<iostream>
using namespace std;
int main(){
	int n,a,i,k;
	cin>>n;
	k=n;
	int num[n];
	int num1[n+1];
	for(i=0;i<n;i++){
		cin>>a;
		num[i]=a;
	}
	num[n-1]=num[n-1]+1;
	for(i=n-1;i>=0;i--){
		if(num[i]>9){
			num1[k]=0;
			num[i-1]+=1;
		}
	    
		else
		num1[k]=num[i];	
		if(num[0]>9)
			num1[0]=1;
		k--;		
	}
	if(num1[0]==0){
	for(i=1;i<n+1;i++)
	cout<<num1[i]<<" ";
	}
	else{
		for(i=0;i<n+1;i++)
	    cout<<num1[i]<<" ";
	}
}
