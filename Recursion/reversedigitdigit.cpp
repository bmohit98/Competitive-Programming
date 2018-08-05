#include<iostream>
#include<string>
using namespace std;
int reversedigit(int n){
	static int num=0;
	if(n==0)
		return num;
	num=num*10+n%10;
	return reversedigit(n/10);
}
int main(){
	int n;
	int rev;
	cin>>n;
	rev=reversedigit(n);
	cout<<rev;
}

