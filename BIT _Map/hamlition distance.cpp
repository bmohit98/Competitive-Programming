#include<iostream>
using namespace std;
void hmtd(int x,int y){
	int count=0,len=0;
	int no_bits=sizeof(int)*8;
	count=x^y;
	cout<<count;
	for(int k=0;k<no_bits-1;k++){
		if(count&1<<k){
			len++;
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
		if(y&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
	cout<<"\n";
	for(int i=no_bits-1;i>=0;i--){
		if(count&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
	cout<<"\n"<<len;
	
}
int main(){
	int x,y;
	cin>>x>>y;
	hmtd(x,y);
		
}
