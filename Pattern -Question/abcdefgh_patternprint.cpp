#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(j=0;j<n;j++){
		for(k=0;k<j;k++)
			cout<<" ";
		for(i=j;i<n;i++)
			cout<<char('A'+i);
		for(i=n-2;i>=j;i--)
			cout<<char('A'+i);
		for(k=0;k<j;k++)
			cout<<" ";
		cout<<"\n";
    }
}

