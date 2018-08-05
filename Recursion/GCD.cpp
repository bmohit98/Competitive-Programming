#include<iostream>
#include<string>
using namespace std;
int GCD(int n,int m){
    int rem;
	if(m==0)
		return n;
	rem=n%m;
	return GCD(m,rem);
}
int main(){
	int n,m;
	int gcd;
	cin>>n>>m;
	gcd=GCD(n,m);
	cout<<gcd;
}

