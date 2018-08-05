#include<iostream>
#include<string>
using namespace std;
int value(char ch){
	if(ch=='I')
		return 1;
	else if(ch=='V')
		return 5;
	else if(ch=='X')
		return 10;
	else if(ch=='L')
		return 50;
	else if(ch=='C')
		return 100;
	else if(ch=='D')
		return 500;	
	else if(ch=='M')
		return 1000;
	else
		return -1;			
}
int main(){
	string str;
	getline(cin,str);
	int i=0,num=0,k=0;
	int s1,s2;
	int len=str.length();
	for(i=0;i<len;i++){
		s1=value(str[i]);
		if(s1==-1){
			cout<<"not match";
			return 0;
		}
		
		if(i+1<len){
			s2=value(str[i+1]);
			if(s2==-1){
			cout<<"not match";
			return 0;
		}
			if(s1>=s2){
				num+=s1;
			}
			else{
				num+=s2-s1;
				i++;
			}
		}
		else{
			num+=s1;
			i++;
		}
	}
	cout<<num;
}

