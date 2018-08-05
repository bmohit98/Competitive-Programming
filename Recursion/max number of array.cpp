#include<iostream>
#include<string.h>
using namespace std;
int max1(int a[],int size){
	static int max=0;
	if(size==1){
		return max;
	}
	if(max<a[size-1]){
		max=a[size-1];
	}
	return max1(a,size-1);
}
int main(){
	int a[]={1,22,3,4,5,11,3};
	int n=7;
	int num=max1(a,n);
	cout<<num;
}

