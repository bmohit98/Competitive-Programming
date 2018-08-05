#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,y;
	int a,i,j,start,count,flag=0;
	int sum;
	cout<<"please enter array size of X";
	cin>>x;
	int X[x];
	for(i=0;i<x;i++){
		cin>>a;
		X[i]=a;
	}
	cout<<"please enter array size of Y";
	cin>>y;
	int Y[y];
	for(i=0;i<y;i++){
		cin>>a;
		Y[i]=a;
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(pow(X[i],Y[j])>pow(Y[j],X[i]))
				cout<<"pair is "<<X[i]<<","<<Y[j]<<"\n";	
	 	}
	}
	return 0;
	
}
