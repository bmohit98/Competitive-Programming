#include<iostream>
#include<string.h>
using namespace std;
void printline(char *s,int start,int inter,int mid,int size){
	int i,j;
	for(i=0;i<start;i++)
		cout<<" ";
	for(i=start;i<size;){
		cout<<s[i];
		for(j=1;j<inter;j++)
			cout<<" ";
		i=i+inter;
		if(i<size&&inter!=0&&mid!=0){
		cout<<s[i];
		}
		i=i+mid;
		for(j=1;j<mid;j++)
			cout<<" ";	
	}
	cout<<"\n";
}
int main(){
	char s[]="vandemataramjaihind";
	int size=strlen(s);
	int n;
	cin>>n;
	int inter,mid;
	for(int i=0;i<n;i++){
		inter=2*(n-1-i);
		mid=i*2;
		printline(s,i,inter,mid,size);
	}
}

