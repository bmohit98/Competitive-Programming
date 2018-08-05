#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i;
	cout<<"enter number ";
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
	   if(n%2==0)
			n=n/2;
		else
			n=3*n+1;
		cout<<n<<" ";
	}
	return 0;
}
