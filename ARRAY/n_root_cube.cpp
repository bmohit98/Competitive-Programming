#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,temp,k;
	cout<<"enter number";
	cin>>n;
	temp=n/2;
	while(temp!=0){
		k=temp;
		if(pow(k,3)<=n && pow(k+1,3)>n){
			cout<<k;
			break;
        }
        else if(pow(k,3)>n)
        	temp=temp/2;
        else if(pow(k,3)<n)
        	temp=temp+temp/2;
	}
}
