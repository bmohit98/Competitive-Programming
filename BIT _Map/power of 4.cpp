#include<iostream>
using namespace std;
void powerfour(int x){
	int rev=0;
	int count=0,count0=0;
	int no_bits=sizeof(int)*8;
	for(int k=0;k<no_bits-1;k++){
		if(x&1<<k){
			count++;
			count0=k;
	}
	}
	cout<<count0;
	cout<<count;
	if(count==1){
		if(count0%2==0)
			cout<<"yes";
		else
			cout<<"no";
	}
	else
		cout<<"no";
}
int main(){
	int x;
	cin>>x;
	powerfour(x);
		
}
