#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,i,j,k=1;
	cin>>n;
	for(j=0;j<n;j++){	
		for(i=0;i<j+1;i++,k++)
			cout<<k<<" ";
	
		cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    for(j=n-1;j>=0;j--){	
		for(i=j;i>=0;i--,k--)
			cout<<k-1<<" ";
	
		cout<<"\n";
    }
}

