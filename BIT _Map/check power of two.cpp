#include<iostream>
using namespace std;
bool powertwo(int y){
	int x=y;
	if(x&&!(x&x-1)){
		cout<<x;
		return true;
	}
	else
		return false;
}
int main(){
	int x;
	cin>>x;
	if(powertwo(x))
		cout<<"yes";
	else
		cout<<"no";
}
