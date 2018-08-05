#include<iostream>
using namespace std;
void nexthighernum(int x){
	int rev=0,j=0;
	int count=x,count0=0;
	int no_bits=sizeof(int)*8;
	for(int k=0;k<no_bits-1;k++){
		if(x&1<<0){
			if(!(x&1<<k+1))
			{
				x=x^1<<k;
				x=x|1<<k+1;
				k++;
				break;
			}	
		}
		else if(x&1<<k){
			if(!(x&1<<k+1))
			{
				x=x^1<<k;
				x=x|1<<k+1;
				k++;
				break;
			}
			else{
				while(x&1<<k+1){
					x=x^1<<k;
					x=x|1<<j;
					j++;
					k++;
				}
				x=x^1<<k;
				x=x|1<<k+1;
				break;
			}	
		}
	}

	for(int i=no_bits-1;i>=0;i--){
		if(count&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
	cout<<"\n"<<x<<"\n";
		for(int i=no_bits-1;i>=0;i--){
		if(x&1<<i)
			cout<<1;
		else
			cout<<0;	
	}
	
}
int main(){
	int x;
	cin>>x;
	nexthighernum(x);
		
}
