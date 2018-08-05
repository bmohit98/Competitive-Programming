#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(j=0;j<n;j++){	
		for(i=0;i<n-j;i++)
			cout<<char('A'+i);
		for(k=1;k<2*j;k++)
			cout<<" ";
		if(j!=0)
			i=n-1-j;
		else
			i=n-2-j;
		for(;i>=0;i--)
			cout<<char('A'+i);
		cout<<"\n";
    }
}

