#include<iostream>
using namespace std;
void nexttwopower(int x){
	int rev=0;
	int count=0,count0=0;
	int no_bits=sizeof(int)*8;
	for(int k=0;k<no_bits-1;k++){
		if(x&1<<no_bits-k-1){
			count=k-1;
			rev=rev|1<<no_bits-count-1;
			break;
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
	cout<<"\n"<<rev;
	
}
int main(){
	int x;
	cin>>x;
	nexttwopower(x);
		
}
