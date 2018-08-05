#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i=0,j=0,k;
	int n=9;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			cout<<"1";
		}
		for(j=0;j<2*n-2*i-1;j++)
			cout<<"0";
		for(j=0;j<i;j++){
			cout<<"1";
		}
		cout<<"\n";		
	}
	for(i=0;i<2*n-1;i++)
		cout<<"1";
	cout<<"\n";	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			cout<<"1";
		}
		for(j=0;j<2*i+1;j++)
			cout<<"0";
		for(j=0;j<n-i-1;j++){
			cout<<"1";
		}
		cout<<"\n";		
	}
}
