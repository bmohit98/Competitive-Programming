#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,k,temp;
	cout<<"please enter array size";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[abs(arr[i])] > 0)
	      arr[abs(arr[i])] = -arr[abs(arr[i])];
	    else{
	      cout<< abs(arr[i]);
	      break;
	   }         
    }   
}
