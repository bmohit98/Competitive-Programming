#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main(){
	int n,i,k;
	int r;
	char temp[10],temp1[10];
	int d,d1;
	cout<<"please enter array size";
	cin>>n;
	
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(k=0;k<n;k++){
		for( i=n-1;i>k;i--){
			
			if(atoi(strcat(itoa(arr[i],temp,10),itoa(arr[i-1],temp1,10)))>atoi(strcat(itoa(arr[i-1],temp,10),itoa(arr[i],temp1,10))))
				{
					r=arr[i];
					arr[i]=arr[i-1];
					arr[i-1]=r;
				}
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
}
	

