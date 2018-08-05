#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void swap(int x){
	int rev=0;
	int no_bits=sizeof(int)*8;
	for(int k=0;k<no_bits-1;k++){
		if(k==0){
			if(x&1<<k){
				rev=rev|1<<(no_bits-k-1);
				
			if((x&1<<no_bits-k-1))
				rev=rev|1<<k;
			}
		}
		else{
			if(x&1<<(no_bits-k-1)){
				rev=rev|1<<(no_bits-k-1);	
			}
		}
	}
	for(int i=no_bits-1;i>=0;i--){
		if(x&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
	cout<<"\n";
	for(int i=no_bits-1;i>=0;i--){
		if(rev&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
}

int main(){
	int x;
	cin>>x;
	swap(x);
}

