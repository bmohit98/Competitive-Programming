#include<iostream>
#include<string.h>
using namespace std;
int count(string s,char c){
	int count=0,i=0;
	while(s[i]!=0){
		if(c==s[i])
			count++;
			i++;
	}
	return count;
}
int main(){
	string s;
	char c;
	getline(cin,s);
	cout<<"enter the char: ";
	cin>>c;
	int num=count(s,c);
	cout<<num;
}
