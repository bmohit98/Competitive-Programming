#include<iostream>
#include<string.h>
#define max 9
using namespace std;
const char digitchar[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char str[max];
int count=0;
void printword(int arr[],int digit,char str[],int n){
	int i;
	if(digit==n){
		cout<<str<<"\n";
		count++;
	}
	for(i=0;i<strlen(digitchar[arr[digit]]);i++){
		str[digit]=digitchar[arr[digit]][i];
		printword(arr,digit+1, str,n);
	}
}
void permutaion(int arr[],int first,int last){
	int i=0;
	if(first==last)
		printword(arr,0, str,last+1);
	else
	{
		for( i=first;i<=last;i++){
			swap(arr[i],arr[first]);
			permutaion(arr,first+1,last);
			swap(arr[i],arr[first]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	permutaion(arr,0,n-1);
	cout<<count;
}

