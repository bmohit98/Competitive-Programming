#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n,i;
	int flag=0;
	int sequre=0;
	cout<<"please enter number";
	cin>>n;
	sequre=sqrt(n);
	for(i=2;i<=sequre;i++){
		if(n%i!=0){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<"given number is prime";
	}
	else
		cout<<"number is not prime";
	return 0;
}
