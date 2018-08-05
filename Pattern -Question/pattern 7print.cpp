#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,li,i=1,j,k;
	cin>>n>>li;
	while(li>0){
		j=n*i;
		k=i;
		while(k>0){
			cout<<j<<" ";
			j++;
			k--;
		}
		cout<<"\n";
		i*=2;
		li--;
	}
}

