#include<iostream>
#include<string>
using namespace std;
void reverse(int n){
	static int newnumber=0;
	if(n==0){
		cout<<newnumber;
	}
	else{
	newnumber=newnumber*10+n%10;
	reverse(n/10);
	}
}
int main(){
	int n;
	cin>>n;
	reverse(n);



}

