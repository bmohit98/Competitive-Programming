#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int i=0,count=0,count1=0,len,len1,j=0;;
	string str;
	getline(cin,str);
    len=str.length();
	
	for(i=len-1;i>=j;i--){
		if(str[j]!=str[i]){
			count1++;
		}
		else
			j++;	
	}
		cout<<count1;
}
