#include<iostream>
#include<string>
using namespace std;
int strStr(string str,string substr){
	int i=0,j=0;
	int len=str.length();
	int len2=substr.length();
	while(i!=len){
		if(substr[j]==str[i]){
			if(j==len2-1){
			//	cout<<"hello"<<" "<<i-len2+1;
				return i-len2+1;
				
			}
			j++;	
		}
		else
			j=0;
		i++;
	}
	return -1;
}
int main(){
	string str,substr;
	getline(cin,str);
	getline(cin,substr);
	int value=strStr(str,substr);
	if(value>0){
		cout<<value;
	}
	else
		cout<<"sub string doesnot present";
}
