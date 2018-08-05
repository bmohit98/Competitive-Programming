#include<iostream>
#include<string>
#include<math.h>
using namespace std;
bool prime(int n,int size){
	if(size==1)
		return true;
	if(n%size!=0)
		return prime(n,size-1);
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	bool ans=prime(n,sqrt(n));
	if(ans)
		cout<<"yes";
	else
		cout<<"No";0
}
