#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n,j=0,a;
	int squr=0;
	cout<<"enter number \n";
	cin>>n;
	squr=sqrt(n);
	int store[squr];
	for(i=1;i<=squr;i++){
		if(n%i==0){
			cout<<i<<" ";
			a=n/i;
			if(i!=a){
				store[j]=a;
				j++;
			}
		}
	}
	for(i=j-1;i>0;i--){
		cout<<store[i]<<" ";
	}
	return 0;
}
