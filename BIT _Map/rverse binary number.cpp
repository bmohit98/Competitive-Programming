#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
void reverse(int x){
	int rev=0;
	int no_bits=sizeof(int)*8;
	for(int k=0;k<no_bits/2;k++){
		if(x&1<<k){
			rev=rev|1<<(no_bits-k-1);
		}
	}	
	cout<<rev<<"\n";
	printf("%x\n",x);
	printf("%x",rev);
		
}
int main(){
	int x;
	cin>>x;
	reverse(x);
}

