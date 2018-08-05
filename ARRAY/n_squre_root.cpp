#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,temp,k,flag=0;
	cout<<"enter number";
	cin>>n;
	temp=n/2;
	while(temp!=0){
		k=temp;
		if(pow(k,2)==n){
			cout<<k;
			flag=1;
			break;
        }
        else if(pow(k,2)>n)
        	temp=temp/2;
        else if(pow(k,2)<n &&pow(k+1,2)>n){
		 break;
    	}
    	else if(pow(k,2)<n)
    	temp=temp+1;
        	
	}
	if(flag==0)
	cout<<"number is not perfect squre" ;
}
