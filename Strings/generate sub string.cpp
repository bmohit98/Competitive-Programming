#include<iostream>
#include<cstring>
using namespace std;
void printsub(char *s,int begin,int end){
	for(int i=begin;i<=end;i++)
		cout<<s[i];
	cout<<"\n";	
}
int main(){
	char str[]="abcd";
	int begin,end;
	int len=strlen(str);
	for(begin=0;begin<len;begin++){
		for(end=begin;end<len;end++){
			printsub(str,begin,end);
		}
	}
}
