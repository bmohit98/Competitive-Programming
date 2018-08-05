#include<iostream>
#include<string>
#include<stdlib.h>
#include<sstream>
using namespace std;
int *count(string s){
	int i=0;
	int *count=(int*)malloc(sizeof(int)*26);
	for(int i=0;i<26;i++){
		count[i]=0;
	}
	while(s[i]!=0){
		//cout<<s[i]-'a';
		if(count[s[i]-'a']!=0){
			count[s[i]-'a']++;
		}
		else
			count[s[i]-'a']=1;
		i++;
	}
	return count;
}
int main(){
	string strl,str1;
	string str3;
	ostringstream temp;
	int i=0,j=0;
	int *count1=(int*)malloc(sizeof(int)*26);
	getline(cin,strl);
	count1=count(strl);
	while(strl[i]!=0){
		if(count1[strl[i]-'a']!=0){
		str1=str1+strl[i];
		temp<<count1[strl[i]-'a'];
		str1.append(temp.str());
		count1[strl[i]-'a']=0;
		}
		temp.clear();
		temp.str("");
		i++;
	}
	cout<<str1;
}
