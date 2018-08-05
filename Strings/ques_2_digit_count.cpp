#include<iostream>
#include<string.h>
using namespace std;
int count(string s){
	int count=0,i=0;
	while(s[i]!=0){
		if('0'<=s[i]&&s[i]<='9')
			count++;
			i++;
	}
	return count;
}
int main(){
	string s;
	char c;
	getline(cin,s);
	int num=count(s);
	cout<<num;
}
