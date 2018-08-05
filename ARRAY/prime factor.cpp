#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n,j=0,a,p;
	int squr=0;
	cout<<"enter number \n";
	cin>>n;
	p=n;
	squr=sqrt(n);
	int store[squr];
	for(i=2;i<=squr;i++){
		j=0;
		while(n%i==0){
			j++;
			n=n/i;
		cout<<i<<" ";	
		}
		//if(j!=0)
		//cout<<i<<" comes "<<j<<"\n";
		
	}
	for(i=squr;i>=2;i--){
		j=0;
		a=p/i;
		while(n%a==0){
			j++;
			n=n/a;
			cout<<a<<" ";
			
		}
		//if(j!=0)
		//cout<<a<<" comes "<<j<<"\n";
		
	}
	
	return 0;
}
