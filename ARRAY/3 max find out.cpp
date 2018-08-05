#include<iostream>
using namespace std;
int main(){
	int n,max1,max2 ,max3,i,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	max1=a[0];max2=a[1];max3=a[2];
	for(i=3;i<n;i++){
		if(max1<max2){
			temp=max1;
			max1=max2;
			max2=temp;
		}
		if(max2<max3){
			temp=max2;
			max3=max2;
			max2=temp;
		}
		if(max1<a[i]){
		max1=a[i];
		}
		else if(max2<a[i]){
			temp=max2;
			max3=max2;
			max2=temp;
			max2=a[i];
		}	
		else if(max3<a[i]){
			max3=a[i];
		}		
	}
	cout<<max3;
}
