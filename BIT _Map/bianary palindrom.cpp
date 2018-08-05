#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void reverse(int x){
	int rev=0;
	int j=0,m=0,i;
	int no_bits=sizeof(int)*8;
	int l=x;
	while(l>0){
		int temp=l%2;
			l=l/2;
			j++;
	}
//	cout<<j;
	
	while(m<j){
		if(x&1<<m){
			rev=rev|1<<(j-m-1);
		
		}
		m++;
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
	if(rev==x){
		cout<<"yes";
	}	
	else
		cout<<"No";
//	cout<<rev<<"\n";
	//printf("%x\n",x);
	//printf("%x",rev);
		
}
int main(){
	int x;
	cin>>x;
	reverse(x);
}

