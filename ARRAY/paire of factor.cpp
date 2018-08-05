#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,n,j=0;
	int squr=0;
	cout<<"enter number \n";
	cin>>n;
	squr=sqrt(n);
	for(i=1;i<=squr;i++){
		if(n%i==0){
			cout<<"("<<i<<","<<n/i<<")"<<"\n";
		
		}
	}
	
}
